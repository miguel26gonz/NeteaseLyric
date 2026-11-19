#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFileDialog>
#include <QKeyEvent>
#include <QMessageBox>
#include <QTextCodec>

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
    void replyFinished(QNetworkReply *reply);
    void keyPressEvent(QKeyEvent *event);

    void on_pushButton_clicked();


    void on_timeCheck_clicked();

    void on_transCheck_clicked();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *manager;
    QString path;
    void set_get_request(QString url);
    void Get_Data(QString string);
    bool first;
    QString raw;//Original lyrics
    QString raw_;//No timeline
    QString trans;//Translation
    QString trans_;//No timeline
    QString songID;//Song id
    QString translateCredits(QString text);

};

#endif // MAINWINDOW_H
