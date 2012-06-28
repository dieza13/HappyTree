#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton_9->setStyleSheet("* { background-color: red }");
    ui->radioButton_7->setStyleSheet("* { background-color: blue }");
    ui->radioButton_11->setStyleSheet("* { background-color: yellow }");
    ui->radioButton_10->setStyleSheet("* { background-color: orange }");
    ui->radioButton_12->setStyleSheet("* { background-color: brown }");
    ui->radioButton_6->setStyleSheet("* { background-color: green}");
    ui->radioButton_8->setStyleSheet("* { background-color: purple }");
    ui->radioButton_5->setStyleSheet("* { background-color: black }");
    color = new QColor("black");
    startFrom = true;
    curve = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_pushButton_clicked()
{

    QGraphicsScene * scene = new QGraphicsScene();
    ui->graphicsView->setScene(scene);
    treeDrawer.getDrawedScene(ui->spinBox->value(),ui->spinBox_2->value(), ui->spinBox_3->value(), *color, ui->graphicsView->height(),ui->graphicsView->width(),startFrom, curve, scene );
//        scene->addLine(0, 0, -ui->graphicsView->width() / 2 + 20 , 150, QPen(QBrush(Qt::red),1));
    //    scene->addLine(0, 0, ui->graphicsView->width() / 2 - 20 , 150, QPen(QBrush(Qt::red),1));

}

void MainWindow::on_radioButton_5_clicked()
{
    color = new QColor("black");
}

void MainWindow::on_radioButton_9_clicked()
{
    color = new QColor("red");
}

void MainWindow::on_radioButton_6_clicked()
{
    color = new QColor("green");
}

void MainWindow::on_radioButton_10_clicked()
{
    color = new QColor("orange");
}

void MainWindow::on_radioButton_7_clicked()
{
    color = new QColor("blue");
}

void MainWindow::on_radioButton_11_clicked()
{
    color = new QColor("yellow");
}

void MainWindow::on_radioButton_8_clicked()
{
    color = new QColor("purple");
}

void MainWindow::on_radioButton_12_clicked()
{
    color = new QColor("brown");
}

void MainWindow::on_radioButton_3_clicked()
{
    startFrom = true;
}

void MainWindow::on_radioButton_4_clicked()
{
    startFrom = false;
}

void MainWindow::on_radioButton_clicked()
{
    curve = true;
}

void MainWindow::on_radioButton_2_clicked()
{
    curve = false;
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
    int x = ui->centralWidget->width() - 280;
    int y = ui->centralWidget->height();
    ui->graphicsView->setGeometry(275,0, x,y);
}








