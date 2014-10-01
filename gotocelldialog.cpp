#include "ui_gotocelldialog.h"
#include "gotocelldialog.h"
#include <QPushButton>

GoToCellDialog::GoToCellDialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    connect(buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()),this, SLOT(accept()));
    connect(buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), this, SLOT(reject()));
    connect(lineEdit, SIGNAL(textChanged(const QString &)),
            this, SLOT(on_lineEdit_textChanged()));
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
    //attach to this object
    lineEdit->setValidator(new QRegExpValidator(regExp, this));
}

GoToCellDialog::~GoToCellDialog()
{
    //attached objects are freed automatically
}

void GoToCellDialog::on_lineEdit_textChanged() {
    buttonBox->button(QDialogButtonBox::Ok)->setEnabled(lineEdit->hasAcceptableInput());
}
