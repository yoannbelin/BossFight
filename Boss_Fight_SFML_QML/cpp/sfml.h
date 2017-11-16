#ifndef SFML_H
#define SFML_H

#include <iostream>
#include <QObject>
#include <QString>
#include "livingentities.h"

class Sfml : public QObject
{

public:
    explicit Sfml(QObject *parent = 0);
    Q_INVOKABLE testSFML();




private:
    int timer = 0;
};

#endif // SFML_H
