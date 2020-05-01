#ifndef PROJECTTABLEGUI_H
#define PROJECTTABLEGUI_H

#include <QDialog>

namespace Ui {
class ProjectTableGUI;
}

class ProjectTableGUI : public QDialog
{
    Q_OBJECT

public:
    explicit ProjectTableGUI(QWidget *parent = nullptr);
    ~ProjectTableGUI();

private:
    Ui::ProjectTableGUI *ui;
};

#endif // PROJECTTABLEGUI_H
