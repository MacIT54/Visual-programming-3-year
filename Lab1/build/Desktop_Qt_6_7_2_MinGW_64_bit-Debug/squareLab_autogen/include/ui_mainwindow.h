/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *listFigure;
    QLabel *photoFigure;
    QPushButton *pushButtonArea;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *fieldLabel_1;
    QLineEdit *field_1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *fieldLabel_2;
    QLineEdit *field_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *fieldLabel_3;
    QLineEdit *field_3;
    QPushButton *pushButtonClear;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(390, 550);
        MainWindow->setMinimumSize(QSize(390, 550));
        MainWindow->setMaximumSize(QSize(390, 550));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listFigure = new QComboBox(centralwidget);
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->addItem(QString());
        listFigure->setObjectName("listFigure");
        listFigure->setGeometry(QRect(30, 10, 331, 41));
        photoFigure = new QLabel(centralwidget);
        photoFigure->setObjectName("photoFigure");
        photoFigure->setGeometry(QRect(50, 260, 291, 221));
        photoFigure->setPixmap(QPixmap(QString::fromUtf8(":/img/square")));
        photoFigure->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButtonArea = new QPushButton(centralwidget);
        pushButtonArea->setObjectName("pushButtonArea");
        pushButtonArea->setGeometry(QRect(30, 200, 161, 41));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 70, 331, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        fieldLabel_1 = new QLabel(layoutWidget);
        fieldLabel_1->setObjectName("fieldLabel_1");
        fieldLabel_1->setEnabled(true);

        horizontalLayout->addWidget(fieldLabel_1);

        field_1 = new QLineEdit(layoutWidget);
        field_1->setObjectName("field_1");
        field_1->setEnabled(true);

        horizontalLayout->addWidget(field_1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        fieldLabel_2 = new QLabel(layoutWidget);
        fieldLabel_2->setObjectName("fieldLabel_2");

        horizontalLayout_2->addWidget(fieldLabel_2);

        field_2 = new QLineEdit(layoutWidget);
        field_2->setObjectName("field_2");

        horizontalLayout_2->addWidget(field_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        fieldLabel_3 = new QLabel(layoutWidget);
        fieldLabel_3->setObjectName("fieldLabel_3");

        horizontalLayout_3->addWidget(fieldLabel_3);

        field_3 = new QLineEdit(layoutWidget);
        field_3->setObjectName("field_3");

        horizontalLayout_3->addWidget(field_3);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButtonClear = new QPushButton(centralwidget);
        pushButtonClear->setObjectName("pushButtonClear");
        pushButtonClear->setGeometry(QRect(200, 200, 161, 41));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 390, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        listFigure->setItemText(0, QCoreApplication::translate("MainWindow", "\320\232\320\262\320\260\320\264\321\200\320\260\321\202", nullptr));
        listFigure->setItemText(1, QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        listFigure->setItemText(2, QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274", nullptr));
        listFigure->setItemText(3, QCoreApplication::translate("MainWindow", "\320\240\320\276\320\274\320\261", nullptr));
        listFigure->setItemText(4, QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        listFigure->setItemText(5, QCoreApplication::translate("MainWindow", "\320\242\321\200\320\260\320\277\320\265\321\206\320\270\321\217", nullptr));
        listFigure->setItemText(6, QCoreApplication::translate("MainWindow", "\320\232\321\200\321\203\320\263", nullptr));
        listFigure->setItemText(7, QCoreApplication::translate("MainWindow", "\320\241\320\265\320\272\321\202\320\276\321\200", nullptr));

        photoFigure->setText(QString());
        pushButtonArea->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        fieldLabel_1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        fieldLabel_2->setText(QCoreApplication::translate("MainWindow", "\320\260", nullptr));
        fieldLabel_3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
