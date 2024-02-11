#include "MainWindow.h"
#include "ImageManager.h"
#include "ParasiteDetector.h"
#include "ResultManager.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
    // Initialize components
    imageManager = new ImageManager();
    aiModel = new AIModel();
    parasiteDetector = new ParasiteDetector(imageManager, aiModel);
    resultManager = new ResultManager();

    // Setup main window
    QWidget *centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QVBoxLayout *layout = new QVBoxLayout(centralWidget);
    imageLabel = new QLabel();
    layout->addWidget(imageLabel);

    openImageButton = new QPushButton("Open Image");
    layout->addWidget(openImageButton);
    connect(openImageButton, &QPushButton::clicked, this, &MainWindow::on_openImageButtonClicked);

    analyzeButton = new QPushButton("Analyze");
    layout->addWidget(analyzeButton);
    connect(analyzeButton, &QPushButton::clicked, this, &MainWindow::on_analyzeButtonClicked);

    saveResultsButton = new QPushButton("Save Results");
    layout->addWidget(saveResultsButton);
    connect(saveResultsButton, &QPushButton::clicked, this, &MainWindow::on_saveResultsButtonClicked);
}

void MainWindow::on_openImageButtonClicked() {
    QString imagePath = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Images (*.png *.jpg *.jpeg)"));
    if (!imagePath.isEmpty()) {
        // Load image
        imageManager->loadImage(imagePath.toStdString());
        // Display image
        cv::Mat image = imageManager->getCurrentImage();
        QImage qImage(image.data, image.cols, image.rows, image.step, QImage::Format_RGB888);
        imageLabel->setPixmap(QPixmap::fromImage(qImage));
        imageLabel->resize(image.cols, image.rows);
    }
}

void MainWindow::on_analyzeButtonClicked() {
    // Perform analysis
    std::vector<Parasite> results = parasiteDetector->runAnalysis();
    // Process results (e.g., display bounding boxes on the image)
    // ...
}

void MainWindow::on_saveResultsButtonClicked() {
    // Save results
    resultManager->storeResults(parasiteDetector->getResults());
    // Export results to a file
    resultManager->exportResults("/path/to/save/results.txt");
}