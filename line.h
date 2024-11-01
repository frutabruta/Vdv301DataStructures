#ifndef LINE_H
#define LINE_H

#include <QObject>
#include <QWidget>

class Line
{
public:
    Line();
    int c=0; //line number  (from ROPID XML)
    int lc=0;  //licence number (eg. 100342 fro line 342)
    QString n="";
    QString lineNumber="";
    QString lineName="";
    int kli=0;  //line kategory (from ROPID XML)
    QString lineType="";
    bool isDiversion=false;
    bool isNight=false;
    bool isReplacement=false;
    bool isSpecial=false;
    bool isWheelchair=false;
    bool isSchool=false; //ignorování zastávek na znamení
    void reset();
    QString ref();
};

#endif // LINE_H
