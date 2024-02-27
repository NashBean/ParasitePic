#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDebug>
#include <opencv2/opencv.hpp>
#include "ImageManager.h" // Include necessary headers
#include "ParasiteDetector.h"
#include "ResultManager.h"

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

private slots:
    void on_openImageButtonClicked();
    void on_analyzeButtonClicked();
    void on_saveResultsButtonClicked();

private:
    ImageManager* imageManager;
    ParasiteDetector* parasiteDetector;
    ResultManager* resultManager;

    QLabel* imageLabel;
    QPushButton* openImageButton;
    QPushButton* analyzeButton;
    QPushButton* saveResultsButton;
};

#endif // MAINWINDOW_H
