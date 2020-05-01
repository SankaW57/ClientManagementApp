#ifndef NEWCLIENT_H
#define NEWCLIENT_H

#include <QDialog>

namespace Ui {
class NewClient;
}

class NewClient : public QDialog
{
    Q_OBJECT

public:
    explicit NewClient(QWidget *parent = nullptr);
    ~NewClient();

private:
    Ui::NewClient *ui;
};

#endif // NEWCLIENT_H
