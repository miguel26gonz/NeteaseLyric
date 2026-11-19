/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *mainLayout;
    QHBoxLayout *layoulayou_1;
    QLabel *songUrlLabel;
    QLineEdit *songUrlEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout;
    QLabel *songNameLabel;
    QLineEdit *songNameEdit;
    QLabel *singerLabel;
    QLineEdit *singerEdit;
    QCheckBox *timeCheck;
    QCheckBox *transCheck;
    QTextEdit *Lrc;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 700);
        MainWindow->setMinimumSize(QSize(600, 700));
        MainWindow->setMaximumSize(QSize(600, 700));
        MainWindow->setBaseSize(QSize(450, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        mainLayout = new QVBoxLayout();
        mainLayout->setSpacing(6);
        mainLayout->setObjectName("mainLayout");
        layoulayou_1 = new QHBoxLayout();
        layoulayou_1->setSpacing(6);
        layoulayou_1->setObjectName("layoulayou_1");
        songUrlLabel = new QLabel(centralWidget);
        songUrlLabel->setObjectName("songUrlLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(12);
        songUrlLabel->setFont(font);

        layoulayou_1->addWidget(songUrlLabel);

        songUrlEdit = new QLineEdit(centralWidget);
        songUrlEdit->setObjectName("songUrlEdit");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setPointSize(10);
        songUrlEdit->setFont(font1);

        layoulayou_1->addWidget(songUrlEdit);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Monaco")});
        font2.setPointSize(12);
        pushButton->setFont(font2);

        layoulayou_1->addWidget(pushButton);

        layoulayou_1->setStretch(1, 5);
        layoulayou_1->setStretch(2, 1);

        mainLayout->addLayout(layoulayou_1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        songNameLabel = new QLabel(centralWidget);
        songNameLabel->setObjectName("songNameLabel");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font3.setPointSize(11);
        songNameLabel->setFont(font3);

        horizontalLayout->addWidget(songNameLabel);

        songNameEdit = new QLineEdit(centralWidget);
        songNameEdit->setObjectName("songNameEdit");
        songNameEdit->setMinimumSize(QSize(0, 0));
        songNameEdit->setFont(font1);
        songNameEdit->setReadOnly(false);

        horizontalLayout->addWidget(songNameEdit);

        singerLabel = new QLabel(centralWidget);
        singerLabel->setObjectName("singerLabel");
        singerLabel->setFont(font3);

        horizontalLayout->addWidget(singerLabel);

        singerEdit = new QLineEdit(centralWidget);
        singerEdit->setObjectName("singerEdit");
        singerEdit->setFont(font1);
        singerEdit->setReadOnly(false);

        horizontalLayout->addWidget(singerEdit);

        timeCheck = new QCheckBox(centralWidget);
        timeCheck->setObjectName("timeCheck");
        timeCheck->setFont(font3);
        timeCheck->setChecked(true);

        horizontalLayout->addWidget(timeCheck);

        transCheck = new QCheckBox(centralWidget);
        transCheck->setObjectName("transCheck");
        transCheck->setFont(font3);
        transCheck->setChecked(true);

        horizontalLayout->addWidget(transCheck);


        mainLayout->addLayout(horizontalLayout);

        Lrc = new QTextEdit(centralWidget);
        Lrc->setObjectName("Lrc");
        Lrc->setMinimumSize(QSize(0, 520));
        Lrc->setFont(font1);
        Lrc->setFrameShape(QFrame::StyledPanel);

        mainLayout->addWidget(Lrc);


        verticalLayout->addLayout(mainLayout);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Lyrics Downloader", nullptr));
        songUrlLabel->setText(QCoreApplication::translate("MainWindow", "Url\357\274\232", nullptr));
        songUrlEdit->setText(QString());
        songUrlEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter the song URL here", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "get", nullptr));
#if QT_CONFIG(shortcut)
        pushButton->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        songNameLabel->setText(QCoreApplication::translate("MainWindow", "Song \357\274\232", nullptr));
        songNameEdit->setText(QString());
        singerLabel->setText(QCoreApplication::translate("MainWindow", "Singer\357\274\232", nullptr));
        singerEdit->setText(QString());
        timeCheck->setText(QCoreApplication::translate("MainWindow", "Timestamp", nullptr));
        transCheck->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        Lrc->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
