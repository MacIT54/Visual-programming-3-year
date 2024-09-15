#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "areacalc.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QComboBox *listFigures = ui->listFigure;
    QPushButton *btnResult = ui->pushButtonArea;
    QPushButton *btnClear = ui->pushButtonClear;
    QAction *actionAuthors = new QAction("Авторы", this);
    QAction *actionClear = new QAction("Очистить", this);
    QAction *actionExit = new QAction("Выход", this);

    QMenu *fileMenu = ui->menubar->addMenu("Файл");
    fileMenu->addAction(actionClear);
    fileMenu->addAction(actionExit);

    QMenu *helpMenu = ui->menubar->addMenu("Справка");
    helpMenu->addAction(actionAuthors);

    setWindowTitle("Area calculator");

    ui->fieldLabel_1->hide();
    ui->field_1->hide();
    ui->fieldLabel_3->hide();
    ui->field_3->hide();

    connect(listFigures, &QComboBox::activated, this, &MainWindow::onShapeChanged);
    connect(btnResult, &QPushButton::clicked, this, &MainWindow::calcClicked);
    connect(actionAuthors, &QAction::triggered, this, &MainWindow::showAuthors);
    connect(actionClear, &QAction::triggered, this, &MainWindow::clearFields);
    connect(btnClear, &QPushButton::clicked, this, &MainWindow::clearFields);
    connect(actionExit, &QAction::triggered, this, &MainWindow::close);
}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onShapeChanged(int index) {
    switch (index) {
    case 0:
        ui->fieldLabel_1->hide();
        ui->field_1->hide();
        ui->fieldLabel_3->hide();
        ui->field_3->hide();

        ui->fieldLabel_2->setText("a ");
        ui->photoFigure->setPixmap(QPixmap(":/img/square"));

        break;
    case 1:
        ui->fieldLabel_3->hide();
        ui->field_3->hide();
        ui->fieldLabel_1->show();
        ui->field_1->show();
        ui->fieldLabel_2->show();

        ui->fieldLabel_1->setText("a ");
        ui->fieldLabel_2->setText("b ");
        ui->photoFigure->setPixmap(QPixmap(":/img/rectangle"));
        break;
    case 2:
        ui->fieldLabel_3->hide();
        ui->field_3->hide();
        ui->fieldLabel_1->show();
        ui->field_1->show();

        ui->fieldLabel_1->setText("a ");
        ui->fieldLabel_2->setText("h ");
        ui->photoFigure->setPixmap(QPixmap(":/img/parallelogram"));

        break;
    case 3:
        ui->fieldLabel_3->hide();
        ui->field_3->hide();
        ui->fieldLabel_1->show();
        ui->field_1->show();

        ui->fieldLabel_1->setText("d1 ");
        ui->fieldLabel_2->setText("d2 ");
        ui->photoFigure->setPixmap(QPixmap(":/img/rhomb"));

        break;
    case 4:
        ui->fieldLabel_3->hide();
        ui->field_3->hide();
        ui->fieldLabel_1->show();
        ui->field_1->show();

        ui->fieldLabel_1->setText("a ");
        ui->fieldLabel_2->setText("h ");
        ui->photoFigure->setPixmap(QPixmap(":/img/triangle"));

        break;
    case 5:
        ui->fieldLabel_1->show();
        ui->field_1->show();
        ui->fieldLabel_3->show();
        ui->field_3->show();

        ui->fieldLabel_1->setText("a ");
        ui->fieldLabel_2->setText("b ");
        ui->fieldLabel_3->setText("h ");
        ui->photoFigure->setPixmap(QPixmap(":/img/trapezoid"));

        break;
    case 6:
        ui->fieldLabel_1->hide();
        ui->field_1->hide();
        ui->fieldLabel_3->hide();
        ui->field_3->hide();

        ui->fieldLabel_2->setText("R ");
        ui->photoFigure->setPixmap(QPixmap(":/img/circle"));

        break;
    case 7:
        ui->fieldLabel_1->show();
        ui->field_1->show();
        ui->fieldLabel_3->hide();
        ui->field_3->hide();

        ui->fieldLabel_1->setText("R ");
        ui->fieldLabel_2->setText("a ");
        ui->photoFigure->setPixmap(QPixmap(":/img/sector"));

        break;
    default:
        break;
    }
}

void MainWindow::calcClicked() {
    areaCalc areac;

    double result = 0.0;
    int index = ui->listFigure->currentIndex();

    double value1 = ui->field_1->text().toDouble();
    double value2 = ui->field_2->text().toDouble();
    double value3 = ui->field_3->text().toDouble();

    switch (index) {
    case 0:
        result = areac.squareArea(value2);
        break;
    case 1:
        result = areac.rectangleArea(value1, value2);
        break;
    case 2:
        result = areac.parallelogramArea(value1, value2);
        break;
    case 3:
        result = areac.rhombusArea(value1, value2);
        break;
    case 4:
        result = areac.triangleArea(value1, value2);
        break;
    case 5:
        result = areac.trapezoidArea(value1, value2, value3);
        break;
    case 6:
        result = areac.circleArea(value2);
        break;
    case 7:
        result = areac.sectorArea(value1, value2);
        break;
    default:
        QMessageBox::warning(this, "Ошибка", "Выберите фигуру.");
        break;
    }

    QString resultMessage = QString("Площадь: %1").arg(result);
    QMessageBox::information(this, "Результат", resultMessage);
}

void MainWindow::showAuthors() {
    QMessageBox::information(this, "Авторы", "Designed by Ledin Daniil Aleksandrovich in SibSUTIS");
}

void MainWindow::clearFields() {
    ui->field_1->clear();
    ui->field_2->clear();
    ui->field_3->clear();
}
