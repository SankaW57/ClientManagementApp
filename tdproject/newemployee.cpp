#include "newemployee.h"
#include "ui_newemployee.h"

NewEmployee::NewEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewEmployee)
{
    ui->setupUi(this);
}

NewEmployee::~NewEmployee()
{
    delete ui;
}
