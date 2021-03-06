#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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
    void on_btnClear_clicked();
    void on_btnDir_clicked();
    void on_listWidget_clicked(const QModelIndex &index);
    void on_btnCopy_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
