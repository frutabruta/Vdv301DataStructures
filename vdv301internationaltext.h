#ifndef VDV301INTERNATIONALTEXT_H
#define VDV301INTERNATIONALTEXT_H

#include <QObject>

class Vdv301InternationalText
{
public:
    Vdv301InternationalText();
    QString text="";
    QString language=""; //de, en, cs
    Vdv301InternationalText(QString textIn, QString languageIn);
};

#endif // VDV301INTERNATIONALTEXT_H
