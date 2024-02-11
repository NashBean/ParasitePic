#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QLabel;
class QPushButton;
class ImageManager;
class ParasiteDetector;
class ResultManager;

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
