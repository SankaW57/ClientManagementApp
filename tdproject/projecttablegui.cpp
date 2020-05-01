#include "projecttablegui.h"
#include "ui_projecttablegui.h"

ProjectTableGUI::ProjectTableGUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProjectTableGUI)
{
    ui->setupUi(this);
}

ProjectTableGUI::~ProjectTableGUI()
{
    delete ui;
}
