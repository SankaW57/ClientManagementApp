#ifndef NEWEMPLOYEE_H
#define NEWEMPLOYEE_H

#include <QDialog>

namespace Ui {
class NewEmployee;
}

class NewEmployee : public QDialog
{
    Q_OBJECT

public:
    explicit NewEmployee(QWidget *parent = nullptr);
    ~NewEmployee();

private:
    Ui::NewEmployee *ui;
};

#endif // NEWEMPLOYEE_H
