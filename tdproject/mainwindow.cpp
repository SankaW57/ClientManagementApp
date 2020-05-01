#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newclient.h"
#include "newemployee.h"
#include "purchaseorder.h"
#include "newproject.h"

#include <QDebug>
#include <QSqlQueryModel>
#include <QtSql>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionPurchase_Order_triggered()     // open new po gui on click
{
    newpo->show();
    this->hide();
}

void MainWindow::on_actionProject_triggered()
{
    NewProject window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_actionEmployee_triggered()
{
    NewEmployee window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_actionClient_triggered()
{
    NewClient window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_actionProject_2_triggered()     // Load PROJECT table
{
    openDB();
    QSqlTableModel* modal = new QSqlTableModel();
    modal->setTable("projects");
    modal->select();
    ui->tableView->setModel(modal);
}

void MainWindow::on_actionClients_triggered()       // Load CLIENTS table
{
    openDB();
    QSqlTableModel* modal = new QSqlTableModel();
    modal->setTable("clients");
    modal->select();
    ui->tableView->setModel(modal);
}

void MainWindow::on_actionEmployees_triggered()     // Load EMPLOYEE table
{
    openDB();
    QSqlTableModel* modal = new QSqlTableModel();
    modal->setTable("employee");
    modal->select();
    ui->tableView->setModel(modal);
}

void MainWindow::on_actionPOs_triggered()           // Load PURCHASE ORDER table
{
    openDB();
    QSqlTableModel* modal = new QSqlTableModel();
    modal->setTable("purchase_order");
    modal->select();
    ui->tableView->setModel(modal);
}
