#ifndef XMLFILEREAD_H
#define XMLFILEREAD_H
#include <QDebug>
#include <QVector>

class XmlFileRead
{

public:
    XmlFileRead();


    QString PathImage() const{
        return pathimage;
    }

    QString PathDeviceXml() {
        return "TypeDevice.xml";
    }

    QString Name_Device() const{
        return name;
    }

    int add_delay() const{
        return delay;
    }

    void setPathImage(const QString pathimage){
        this->pathimage = pathimage;
    }

    void setName(const QString name){
        this->name = name;
    }

    void setdelay(const int delay){
        this->delay = delay;
    }
    static QVector<XmlFileRead> add_DeviceType();

private:
    QString pathimage;
    QString name;
    int delay;

    static QString DeviceXmlPath(){
        return "TypeDevice.xml";
    }
};

#endif // XMLFILEREAD_H
