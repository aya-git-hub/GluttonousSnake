#ifndef MYQT_H
#define MYQT_H
#include <QPushButton>
#include <QWidget>//某类名一定与头文件名一样，没有.h

namespace Ui {
class MyQt;
}

class MyQt : public QWidget
{
    Q_OBJECT

public:
    explicit MyQt(QWidget *parent = 0);
    ~MyQt();

private:
    Ui::MyQt *ui;
    QPushButton b1;
    QPushButton *b2;
};

#endif // MYQT_H
