#include "edit2.h"
#include "ui_edit2.h"
#include "datavar.h"
#include "manager.h"
#include <QMapIterator>

QTableWidgetItem* updatecurrent=new QTableWidgetItem;

edit2::edit2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit2)
{
    ui->setupUi(this);
    ui->table->setEditTriggers(QAbstractItemView::NoEditTriggers);
    td = new textdialog();
    QObject::connect(td, SIGNAL(sendString(QString)), this,SLOT(lineEditGetTem(QString)));
}

edit2::~edit2()
{
    delete ui;
}
QString get_table_name(int dbc){
    QMap<int,QString>::const_iterator it=dbmap.find(dbc);
      QString table_name= it.value();
      return table_name;
}
void edit2::getheaders(int a,QStringList& headers){
  int len=attlen[a];
  const QString* arr =attcollection[a];
  for(int i=0;i<len;i++)
      headers<<arr[i];
}
void edit2::showtb(int a){
       ui->table->clear();
       QMap<int,QString>::const_iterator it=dbmap.find(a);
         QString table_name= it.value();
    QSqlQuery query;
    query.exec("select count(*) from epidemic_system."+table_name+";");
    query.next();
    int row=query.value(0).toInt();
    ui->table->setRowCount(row);
    QStringList headers;
    getheaders(a,headers);
    int column=headers.length();
    ui->table->setRowCount(row);
    ui->table->setColumnCount(column);
    ui->table->setHorizontalHeaderLabels(headers);
     query.exec("select * from epidemic_system."+table_name+";");
     int rowindex=0;
     while(query.next()){
          for(int i=0;i<column;i++)
          {
              QString result=query.value(i).toString();
              //qDebug()<<result;
              QTableWidgetItem *item=new QTableWidgetItem(result);
              ui->table->setItem(rowindex,i,item);
          }
         rowindex++;
     }
}
void edit2::addtb(int a){
    //QString table_name=get_table_name(a);
    QStringList headers;
    getheaders(a,headers);
    ui->add_tb->setColumnCount(headers.length());
    ui->add_tb->setRowCount(1);
    ui->add_tb->setHorizontalHeaderLabels(headers);
}


void edit2::on_pushButton_clicked()
{
   int choicedb=ui->choose_db->currentIndex();
   int choiceop=ui->choose_op->currentIndex();
   showtb(choicedb);
   switch (choiceop) {
   case 0://查看
   {
   }
      break;
    case 1://添加
    {
      //ui->add_btn->setText("添加");
    addtb(choicedb);
   }
       break;
    case 2://修改
   {
       ui->table->setSelectionBehavior(QAbstractItemView::SelectItems);
        ui->table->setSelectionMode ( QAbstractItemView::SingleSelection);
     // ui->add_btn->setText("修改");
   }
       break;
   case 3://删除
  {
    ui->table->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table->setSelectionMode ( QAbstractItemView::SingleSelection);
  }
      break;
   default:
       break;
   }
}

void edit2::on_add_btn_clicked()
{
    int choicedb=ui->choose_db->currentIndex();
    if(ui->choose_op->currentIndex()==0||ui->choose_op->currentIndex()==3)
        return;
   //qDebug()<<choicedb;
    QMap<int,QString>::const_iterator it=dbmap.find(choicedb);
      QString table_name= it.value();
    QString statement="insert into epidemic_system."
            +table_name+" values (";

    int c=ui->add_tb->columnCount();
    for(int i=0;i<c;i++){
        QTableWidgetItem* item=ui->add_tb->item(0,i);
        statement.append("'");
        statement.append(item->text());
        statement.append("'");
        if(i<c-1)statement.append(",");
        else statement.append(");");
    }
   QSqlQuery query;
   qDebug()<<statement;
   query.exec(statement);
    ui->add_tb->clear();
    showtb(choicedb);
}

void edit2::on_back_clicked()
{
    manager * m=new manager;
    this->close();
    m->show();
}
void edit2::lineEditGetTem(QString str){
    user_text=str;
    usertextlock=false;
    qDebug()<<"setuser"<<str;
}
void edit2::on_update_btn_clicked()
{
    int opc=ui->choose_op->currentIndex();
    if(opc!=2)return;
    int dbc=ui->choose_db->currentIndex();
    if(usertextlock==false) updatedb(dbc);
    else {qDebug()<<"failed";return;}
        showtb(dbc);
}
QString edit2::get_wherestm(int dbc,int cur_row){
    QString wherestm=" where ";
    const QString* prikey=pricollection[dbc];
    int len=prilen[dbc];
    for(int i=0;i<len;i++){
        wherestm.append(prikey[i]);
        wherestm.append("=");
        if(prikey[i]!="time"){
         wherestm.append("'");
         wherestm.append(ui->table->item(cur_row,i)->text());
         wherestm.append("'");
        }
       else{
            QString t=ui->table->item(cur_row,i)->text();
            t=t.replace("-","");
            t=t.replace("T","");
            t=t.replace(":","");
            wherestm.append(t);
        }
        if(i<len-1)wherestm.append(" and ");
        else wherestm.append(";");
    }qDebug()<<wherestm;
    return wherestm;
}
void edit2::updatedb(int dbc){
    int cur_colum=updatecurrent->column();
    int cur_row=updatecurrent->row();
    QString ud_col=attcollection[dbc][cur_colum];
    //while(usertextlock)qDebug()<<"wait";
    qDebug()<<"user_text"<<user_text;
    QSqlQuery query;
   QString wherestm=get_wherestm(dbc,cur_row);
   QMap<int,QString>::const_iterator it=dbmap.find(dbc);
     QString table_name= it.value();
    QString statement="update "+table_name+" set "+ud_col+"='"+user_text+"'"+wherestm;
    qDebug()<<statement;
    query.exec(statement);
    usertextlock=true;
}

void edit2::on_table_itemDoubleClicked(QTableWidgetItem *item)
{
    if(ui->choose_op->currentIndex()!=2)return;
    td->show();
}
void edit2::on_table_currentItemChanged(QTableWidgetItem *current, QTableWidgetItem *previous)
{
    updatecurrent=current;
}

void edit2::deletedb(int dbc){
    QMap<int,QString>::const_iterator it=dbmap.find(dbc);
      QString table_name= it.value();
    int cur_row=ui->table->currentRow();
    QString wherestm=get_wherestm(dbc,cur_row);
    QString statement="delete from "+table_name+wherestm;
    QSqlQuery query;
    query.exec(statement);
}
void edit2::on_delete_btn_clicked()
{
    if(ui->choose_op->currentIndex()!=3)return;
    int dbc=ui->choose_db->currentIndex();
    deletedb(dbc);
    showtb(dbc);
}
