#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imageManager = new ImageManager();
    resultManager = new ResultManager();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete imageManager;
    delete resultManager;
}

void MainWindow::openImageFileDialog()
{
    QStringList fileNames = QFileDialog::getOpenFileNames(this, tr("Select one or more files to open"),
        "./images/", tr("Images (*.jpg *.jpeg)"));
     for (const QString &fileName : fileNames) {
        imageManager.loadImages(fileName.toStdString());
    }
}
