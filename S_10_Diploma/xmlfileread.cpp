#include "xmlfileread.h"
#include <QXmlStreamReader>
#include <QFile>
#include <QString>
#include <QDir>
#include <QVector>

XmlFileRead::XmlFileRead()
{

}

QVector<XmlFileRead> XmlFileRead :: add_DeviceType() {
    QVector<XmlFileRead> ruf;
    QFile file(QDir::currentPath()+ "/" + DeviceXmlPath());
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QXmlStreamReader filexml(&file);
        while(filexml.name() == "device"){
            XmlFileRead device;
            while(filexml.readNextStartElement()){
                if(filexml.name() == "router"){
                    device.setName(QString::fromUtf8(filexml.readElementText().toStdString().c_str()));
                }else if(filexml.name() == "img"){
                   device.setPathImage(QString::fromUtf8(filexml.readElementText().toStdString().c_str()));
                }else if(filexml.name() == "dalay"){
                    device.setdelay(filexml.readElementText().toInt());
                 }else {
                    filexml.skipCurrentElement();
                    }
            }
            ruf.push_back(device);
        }
        file.close();
    }
    return ruf;
}
