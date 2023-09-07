#ifndef NOTIFICATION_H
#define NOTIFICATION_H

#include <QObject>
#include<QMessageBox>
#include<QDebug>
class Notification : public QObject
{
    Q_OBJECT
public:
    explicit Notification(QObject *parent = nullptr);

signals:
public:
    static void showInfo(const QString message, const QString title)
    {
        QMessageBox msgBox;
        msgBox.setText(message);
        msgBox.setInformativeText(title);

        msgBox.setIcon(QMessageBox::Information);
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.setDefaultButton(QMessageBox::Ok);
        int ret = msgBox.exec();
        qDebug()<<ret;
//        return ret;
    }
    static void showError(const QString message, const QString title)

    {

        QMessageBox msgBox ;

        msgBox.setText(message);

        msgBox.setInformativeText(title);

        msgBox.setIcon(QMessageBox::Critical);
        msgBox.setStandardButtons(QMessageBox::Ok);

        msgBox.setDefaultButton(QMessageBox::Ok);

        int ret = msgBox.exec();



    }

};

#endif // NOTIFICATION_H
