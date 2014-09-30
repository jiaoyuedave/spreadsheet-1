#include "finddialog.h"
#include <QtGui>

FindDialog::FindDialog(QWidget *parent) :
    QDialog(parent)
{
    label = new QLabel(tr("Find &what:"));
    lineEdit = new QLineEdit;
    label->setBuddy(lineEdit);

    caseCheckBox = new QCheckBox(tr("case &case"));
    backwardCheckBox = new QCheckBox(tr("backward &backward"));

    findButton = new QPushButton(tr("&Find"));
    findButton->setDefault(true);
    findButton->setEnabled(false);

    closeButton = new QPushButton(tr("Close"));

    connect(lineEdit, SIGNAL(textChanged(const QString &)),
                     this, SLOT(enableFindButton(const QString &)));
    connect(findButton, SIGNAL(clicked()),
                     this, SLOT(findClicked()));
    connect(closeButton, SIGNAL(clicked()),
                     this, SLOT(close()));

    QHBoxLayout *topleftLayout = new QHBoxLayout;
    topleftLayout->addWidget(label);
    topleftLayout->addWidget(lineEdit);

    QVBoxLayout *leftLayout = new QVBoxLayout;
    leftLayout->addLayout(topleftLayout);
    leftLayout->addWidget(caseCheckBox);
    leftLayout->addWidget(backwardCheckBox);

    QVBoxLayout *rightLayout = new QVBoxLayout;
    rightLayout->addWidget(findButton);
    rightLayout->addWidget(closeButton);
    rightLayout->addStretch();

    QHBoxLayout *mainLayout = new QHBoxLayout;
    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    setLayout(mainLayout);

    setWindowTitle(tr("Find"));
    setFixedHeight(sizeHint().height());
}

void FindDialog::findClicked() {
    QString text = lineEdit->text();
    Qt::CaseSensitivity cs = caseCheckBox->isChecked() ?
                Qt::CaseSensitive: Qt::CaseInsensitive;

    if (backwardCheckBox->isChecked()) {
        findPrevious(text, cs);
    }
    else {
        findNext(text, cs);
    }
}

void FindDialog::enableFindButton(const QString &text) {
    findButton->setEnabled(!text.isEmpty());
}
