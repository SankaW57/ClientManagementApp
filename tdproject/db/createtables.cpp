#include <QDebug>
#include <QtSql>

// #include "createtables.h"

void createTables() {

    QString projects = "CREATE TABLE projects ("
                    "project_id int PRIMARY KEY autoincrement,"
                    "project_name varchar(45),"
                    "client int,"
                    "lead_employee int,"
                    "description,"
                    "start_date datetime,"
                    "deadline datetime,"
                    "status int);";

    QString project_status = "CREATE TABLE project_status ("
                    "stage_name varchar(20));";

    QString clients = "CREATE TABLE clients ("
                    "client_id int PRIMARY KEY autoincrement,"
                    "company_name varchar(50),"
                    "first_name varchar(20),"
                    "last_name varchar(20),"
                    "cellphone varchar(10),"
                    "email varchar(25));";

    QString employees = "CREATE TABLE employee ("
                    "employee_id int PRIMARY KEY autoincrement, "
                    "first_name varchar(20), "
                    "last_name varchar(20), "
                    "department int, "
                    "job_title varchar(20), "
                    "email varchar(25));";

    QString departments = "CREATE TABLE departments ("
                    "dept_id int PRIMARY KEY autoincrement, "
                    "name varchar(45));";

    QString purchase_orders = "CREATE TABLE purchase_order ("
                    "po_id int primary key autoincrement, "
                    "name varchar(45), "
                    "start_date datetime, "
                    "deadline datetime, "
                    "description varchar(140), "
                    "project int, "
                    "client int, "
                    "total_cost double);";

    QSqlQuery qry;

    if(!qry.exec(projects))
    {
        qDebug()<<"Error creating table";
    }

}
