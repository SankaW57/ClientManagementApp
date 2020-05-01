#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "purchaseorder.h"
#include <QtSql>
#include <QFileInfo> // Need for relative path (don't delete)

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    PurchaseOrder *newpo = new PurchaseOrder();
    QSqlDatabase db;


    bool openDB() {

        QString finalPath = "/Users/robyn/GoogleDrive/QueensUniversity/CISC320/Group Project/divisionrepo/tdproject/db/projectmanager.db";

        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(finalPath);

        if(!db.open()) {
            qDebug() << "Error opening database" << db.lastError();
            return false;
        }
        else {
            qDebug() << "Connection Established.";
            return true;
        }
    }

    void closeDB() {
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }


private slots:
    void on_actionPurchase_Order_triggered();
    void on_actionProject_triggered();
    void on_actionEmployee_triggered();
    void on_actionClient_triggered();
    void on_actionProject_2_triggered();
    void on_actionClients_triggered();
    void on_actionEmployees_triggered();
    void on_actionPOs_triggered();

private:
    Ui::MainWindow *ui;
    PurchaseOrder purchaseorder;
};

#endif // MAINWINDOW_H
