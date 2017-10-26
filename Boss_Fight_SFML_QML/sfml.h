#ifndef SFML_H
#define SFML_H

#include <iostream>
#include <QObject>

class Sfml : public QObject
{

public:
    explicit Sfml(QObject *parent = 0);
    Q_INVOKABLE testSFML();

private:
    int timer = 0;

signals:

public slots:

};

#endif // SFML_H
