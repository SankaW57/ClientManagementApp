#include "purchaseorder.h"
#include "ui_purchaseorder.h"
#include <QSqlDatabase>
#include <QtSql>


PurchaseOrder::PurchaseOrder(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PurchaseOrder)
{
    ui->setupUi(this);
}

PurchaseOrder::~PurchaseOrder()
{
    delete ui;
}

void PurchaseOrder::on_pushButton_clicked()         // on Submit button pushed
{
    QSqlDatabase db;
    QSqlQuery insertPO(db);

    QVariant project_id = ui->comboBox->itemData(ui->comboBox->currentIndex());
    QString po_name = ui->lineEdit->text();
    QDate po_start = ui->dateEdit->date();
    QDate po_dead = ui->dateEdit_2->date();
    QString po_desc = ui->textEdit->toPlainText();
    QVariant client = ui->comboBox_2->itemData(ui->comboBox_2->currentIndex());
    double po_val = ui->doubleSpinBox->value();

    insertPO.prepare("INSERT INTO purchase_order (name, start_date, deadline, description, project, client, total_cost) VALUES (:name, :start_date, :deadline, :description, :project, :client, :total_cost)");
    insertPO.bindValue(":name",po_name);
    insertPO.bindValue(":start_date",po_start);
    insertPO.bindValue(":deadline",po_dead);
    insertPO.bindValue(":description",po_desc);
    insertPO.bindValue(":project", project_id);
    insertPO.bindValue(":client",client);
    insertPO.bindValue(":total_cost",po_val);

    qDebug()<<insertPO.exec()<<endl;        //insert this entry to the database

}

void PurchaseOrder::on_pushButton_2_clicked()       // Clear fields button. Wipes all QLineEdit's
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>()) {
        widget->clear();
    }
}
