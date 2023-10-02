#include "line.h"

Line::Line()
{

}


void Line::reset()
{
    c=0;
    lc=0;
    kli=0;
    n="";  //line description (from ROPID XML)
    lineNumber="";
    lineName="";
    lineType="";
    isDiversion=false;
    isNight=false;
    isReplacement=false;
    isSpecial=false;
    isWheelchair=false;
    isSchool=false;
}
