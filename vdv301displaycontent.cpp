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
    else if(input=="Lcd")
    {
        return DisplayContentLcd;
    }
    else
    {
        return DisplayContentUndefined;
    }

}
