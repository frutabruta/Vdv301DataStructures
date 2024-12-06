#include "vdv301displaycontent.h"

Vdv301DisplayContent::Vdv301DisplayContent()
{


}


DisplayContentClass Vdv301DisplayContent::qStringToDisplayContentClass(QString input)
{
    if(input=="Front")
    {
        return DisplayContentFront;
    }
    else if(input=="Side")
    {
        return DisplayContentSide;
    }
    else if(input=="Rear")
    {
        return DisplayContentRear;
    }
    else if(input=="Interior")
    {
        return DisplayContentInterior;
    }
    else if(input=="Lcd")
    {
        return DisplayContentLcd;
    }
    else
    {
        return DisplayContentUndefined;
    }

}

QString Vdv301DisplayContent::displayContentClassEnumerationToQString(DisplayContentClass displayContentClass)
{
    switch(displayContentClass)
    {

    case DisplayContentUndefined:
        return "";
    case DisplayContentFront:
        return "Front";
    case DisplayContentSide:
        return "Side";
    case DisplayContentRear:
        return "Rear";
    case DisplayContentInterior:
        return "Interior";
    case DisplayContentLcd:
        return "Lcd";
    default:
        return "";
        break;
    }


}
