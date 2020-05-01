#ifndef PURCHASEORDER_H
#define PURCHASEORDER_H

#include <QWidget>

namespace Ui {
class PurchaseOrder;
}

class PurchaseOrder : public QWidget
{
    Q_OBJECT

public:
    explicit PurchaseOrder(QWidget *parent = nullptr);
    ~PurchaseOrder();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::PurchaseOrder *ui;
};

#endif // PURCHASEORDER_H
