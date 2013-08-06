#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(int x, int y, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resize(x,y);
    _valueButton = false;

    //Slider Init
    _slider = new QSlider(Qt::Vertical, this);
    _slider->setRange(0,100);
    _slider->setGeometry(200,200,50,200);
    _slider->setValue(56);
    QObject::connect(_slider, SIGNAL(valueChanged(int)), this, SLOT(changingValueSlider(int)));

    _playButton = new QPushButton("Play", this);
    _playButton->setGeometry(500,200,80,60);
    QObject::connect(_playButton, SIGNAL(clicked()), this, SLOT(changingValueButton()));

    //Label  Init
    _label = new QLabel(QString::number(_slider->value()), this);
    _label->setGeometry(215,150,60,60);


    _label2 = new QLabel("0", this);
    _label2->setGeometry(530,150,50,50);



}


void MainWindow::changingValueSlider(int newValue)
{
    // change text label value
    _label->setNum(newValue);
}

void MainWindow::changingValueButton()
{
    if(_valueButton == false)
    {
        _playButton->setText("Pause");
        _valueButton = true;
        _label2->setNum(1);
    }
    else
    {
        _playButton->setText("Play");
        _valueButton = false;
        _label2->setNum(0);
    }
}

MainWindow::~MainWindow()
{
    delete _slider;
    delete _label;
    delete _label2;
    delete _playButton;
    delete ui;

}

