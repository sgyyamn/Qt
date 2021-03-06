#ifndef PATTERNUI_H
#define PATTERNUI_H

#include <QDialog>
#include <QLabel>
#include <QString>
#include <QObject>
#include <QDateTime>
#include <QPushButton>
#include <QBoxLayout>
#include <QVBoxLayout>   // ˮƽ
#include <QHBoxLayout>   // ��ֱ
#include <QGridLayout>   // ��״
#include <QFormLayout>
#include <QWidget>
#include <QDebug>
#include <QLineEdit>

#include "serialcommunication.h"

namespace Ui {
    class patternUI;
}

struct Pattern
{
    QString p_Name;
    int p_Temp;
    int p_Humid;
   // int p_Door;
    //int p_Wins;
    QString p_Door;
    QString p_Wins;

};

class patternUI : public QWidget
{
    Q_OBJECT

public:
    void setSerial(SerialCommunication *s){serial = s;};

    explicit patternUI(QWidget *parent = 0);
    ~patternUI();

    void setPattern(QString p);

    int sendTem(int p);
    int sendHum(int p);

    void refValue(int p);
    void setValue();

    void setButtonImg(int c,int p);
    int getPrve();
    void setPrve(int c);

signals:
    void signalP(int);

    void signalT(int);
    void signalH(int);

private slots:

    void aqPatButtonSlot();
    void smPatButtonSlot();
    void ljPatButtonSlot();
    void shPatButtonSlot();

    void chooseButSlot();
    void setvalButSlot();

    void okkkkkButSlot();
    void cancelButSlot();

    void temAddButSlot();
    void temSelButSlot();
    void humAddButSlot();
    void humSelButSlot();

    //void toDialogSlot();

private:
    SerialCommunication *serial;

    Ui::patternUI *ui;

    QLabel *doorlack;
    QLabel *windowlack;
    QLineEdit *temLineEdit;
    QLineEdit *humLineEdit;

    QLabel *trianLabel_1;
    QLabel *trianLabel_2;
    QLabel *trianLabel_3;
    QLabel *trianLabel_4;

    QPushButton *aqPatButton;
    QPushButton *smPatButton;
    QPushButton *ljPatButton;
    QPushButton *shPatButton;

    QPushButton *temAddBut;
    QPushButton *temSelBut;
    QPushButton *humAddBut;
    QPushButton *humSelBut;

    QPushButton *chooseBut;
    QPushButton *setvalBut;
    QPushButton *okkkkkBut;
    QPushButton *cancelBut;


    Pattern pattern[4];

    QString pName;

    int pTemp;
    int pHumid;

    int pchoose;

    int curButton;
    int prveButton;


};

#endif // PATTERNUI_H
