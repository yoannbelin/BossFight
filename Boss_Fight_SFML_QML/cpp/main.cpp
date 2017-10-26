#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <SFML/Graphics.hpp>
#include <iostream>
#include "livingentities.h"
#include "player.h"
#include "boss.h"
#include "sfml.h"
#include "contexte.h"
#include <SFML/Graphics.hpp>

using namespace sf;

int main(int argc, char *argv[])
{
    RenderWindow window(VideoMode(800, 600), "SFML dans Qt ouvert depuis le QML !!");
    Player joueur1(10, "C:/Boss_Fight_Main/Boss_Fight_SFML_QML/Spritesheet/test.png");

    Boss boss1;
    Boss* ptr1(nullptr);
    ptr1 = &boss1;
    float pvRestantsJoueur = joueur1.getCurrentHealth();
    float pvMaxJoueur = joueur1.getMaxHealth();
    float pvRestantsBoss = boss1.getCurrentHealth();
    float pvMaxBoss = boss1.getMaxHealth();
    int joueurDegats = joueur1.getDegats();
    qDebug() << pvRestantsJoueur;
    qDebug() << pvMaxJoueur;
    qDebug() << pvRestantsBoss;
    qDebug() << pvMaxBoss;
    qDebug() << joueurDegats;
    joueur1.attaque(ptr1);


    qDebug() << boss1.getCurrentHealth();



    while (window.isOpen())
    {


//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//        {
//            joueur1.moveRight();
//        }
        sf::Sprite affiche = joueur1.getSprite();
        window.clear();
        window.draw(affiche);
        window.display();
    }

//    QGuiApplication app(argc, argv);

//    QQmlApplicationEngine engine;
//    //engine.rootContext()->setContextProperty("SFML", &sfml);
//    QQmlContext* ctx = engine.rootContext();
//    Contexte myApp;

//    // Set le ctx
//    myApp.setContext( ctx );

//    // Update le ctx
//    myApp.updateContext();

//    // Ouvrir le Qml
//    engine.load(QUrl(QStringLiteral("qml/qml.qml")));

//    if (engine.rootObjects().isEmpty())
//    { return -1; }

//    return app.exec();
return 1;
}
