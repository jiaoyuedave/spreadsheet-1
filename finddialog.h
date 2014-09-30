#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

class QCheckBox;
class QLabel;
class QPushButton;
class QLineEdit;

class FindDialog : public QDialog
{
    Q_OBJECT
public:
    explicit FindDialog(QWidget *parent = 0);
    
signals:
    void findNext(const QString &str, Qt::CaseSensitivity cs);
    void findPrevious(const QString &str, Qt::CaseSensitivity cs);
    
public slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel *label;
    QCheckBox *caseCheckBox;
    QCheckBox *backwardCheckBox;
    QLineEdit *lineEdit;
    QPushButton *findButton;
    QPushButton *closeButton;
};

#endif // FINDDIALOG_H
