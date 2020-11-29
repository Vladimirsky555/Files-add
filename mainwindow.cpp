#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QBuffer>
#include <QFileDialog>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Photo adding");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnClear_clicked()
{
    ui->listWidget->clear();
    ui->textEdit->clear();
}

void MainWindow::on_btnDir_clicked()
{
    QDir mDir(QFileDialog::getExistingDirectory(this, "Выбор папки", ""));
    for(QFileInfo tmp : mDir.entryInfoList()){
        if(tmp.fileName() != ".."){
            if(tmp.fileName() != "."){
                ui->listWidget->addItem(tmp.fileName());
            }
        }
    }
}

void MainWindow::on_listWidget_clicked(const QModelIndex &index)
{
    ui->textEdit->clear();
    QString str = ui->listWidget->item(index.row())->text();
    ui->textEdit->append(str);
    ui->listWidget->takeItem(index.row());
}

void MainWindow::on_btnCopy_clicked()
{
    ui->textEdit->copy();
    ui->textEdit->clear();
}
