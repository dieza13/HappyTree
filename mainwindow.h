#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "treedrawer.h"
#include "QColor"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    
private slots:


    void on_pushButton_clicked();

    void on_radioButton_5_clicked();

    void on_radioButton_9_clicked();

    void on_radioButton_6_clicked();

    void on_radioButton_10_clicked();

    void on_radioButton_7_clicked();

    void on_radioButton_11_clicked();

    void on_radioButton_8_clicked();

    void on_radioButton_12_clicked();

    void on_radioButton_3_clicked();

    void on_radioButton_4_clicked();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();





private:
    Ui::MainWindow *ui;
    TreeDrawer treeDrawer;
    QColor * color;
    bool startFrom;
    bool curve;

private:
    void resizeEvent(QResizeEvent* event);

};



#endif // MAINWINDOW_H
