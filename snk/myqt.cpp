#include "myqt.h"
#include "ui_myqt.h"

MyQt::MyQt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyQt)
{
    ui->setupUi(this);
    b2=new QPushButton("star",this) ;
    //b2->setText("开始贪吃蛇吧");
    b2->show();//如果按钮要依附于某个窗口，需要指定父类
    //b2->move(1000,1000);
    b1.setParent(this);
    b1.setText("开始贪吃蛇吧");
    b1.move(100,100);//移动，原点在左上角x沿右方向，y沿下方向
    /*            o--------------------->x
                  |
                  |
                  |
                  v
                  y                           */
    b1.resize(100,100);//设置按钮大小
    this->setWindowTitle("snake");
    //this->setFixedSize(1920,1080);
    this->setWindowIcon(QIcon("C:\\a.jpg"));
    connect(&b1,&QPushButton::clicked,this,&MyQt::close);
}

MyQt::~MyQt()
{
    delete ui;
}
