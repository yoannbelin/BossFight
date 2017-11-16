#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "livingentities.h"
#include "player.h"
#include "boss.h"
#include "sfml.h"
#include "game.h"
#include <QDebug>

using namespace sf;

Game *Game::_singleton =  nullptr;



int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Game::getInstance();

    QQmlApplicationEngine engine;
    //engine.rootContext()->setContextProperty("SFML", &sfml);
    QQmlContext* ctx = engine.rootContext();
    Game myApp;

    // Set le ctx
    myApp.setContext( ctx );

    // Ouvrir le Qml
    engine.load(QUrl(QStringLiteral("qml/qml.qml")));

    if (engine.rootObjects().isEmpty())
    { return -1; }

    return app.exec();
    return 1;
}
