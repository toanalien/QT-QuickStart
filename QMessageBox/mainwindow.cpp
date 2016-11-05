#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qmessagebox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    void about
//    void aboutQt
//    StandardButton critical
//    StandardButton information
//    StandardButton question
//    StandardButton warning

//    QMessageBox::aboutQt(this, "My Title");
//    QMessageBox::critical(this, "My Title", "This is a information message.");
    QMessageBox::question(this, "My Question", "This is a question", QMessageBox::Yes | QMessageBox::No | QMessageBox::Abort);
}
