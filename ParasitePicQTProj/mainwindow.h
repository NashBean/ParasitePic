
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include "../ImageManager.h"
#include "../ResultManager.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void openImageFileDialog();

private:
    Ui::MainWindow *ui;
    ImageManager* imageManager;
    ResultManager* resultManager;

};

#endif // MAINWINDOW_H
