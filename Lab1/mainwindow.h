#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onShapeChanged(int index);
    void calcClicked();
    void showAuthors();
    void clearFields();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
