#ifndef GOTOCELL_H
#define GOTOCELL_H

#include <QDialog>
#include "ui_gotocell.h"

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT
    
public:
    explicit GoToCellDialog(QWidget *parent = 0);
    ~GoToCellDialog();

private slots:
    void on_lineEdit_textChanged();

};

#endif // GOTOCELL_H
