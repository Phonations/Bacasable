#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QString>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(int x, int y, QWidget *parent = 0);
    ~MainWindow();

public slots:
    void changingValueSlider(int newValue);
    void changingValueButton();

    
private:
    Ui::MainWindow *ui;
    QSlider *_slider;
    QPushButton *_playButton;
    QLabel *_label;
    QLabel *_label2;
    int _valueSlider;
    bool _valueButton;
};

#endif // MAINWINDOW_H
