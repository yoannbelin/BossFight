#include "player.h"
#include <QObject>
#include "boss.h"
#include "sfml.h"
#include <QDebug>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "game.h"

using namespace sf;

Sfml::Sfml(QObject *parent) : QObject(parent)
{
}

void deleteLE(LivingEntities* lePtr)
{
    delete lePtr;
    lePtr = nullptr;
}

Sfml::testSFML()
{
    int attaqueSpeed = 0;
    bool attacking = false;

    Player joueur1("Spritesheet/test.png", 10, 100, 100);
    Player* joueur1Ptr(nullptr);
    joueur1Ptr = &joueur1;

    Boss boss1("Spritesheet/test.png", 10, 100, 100);
    Boss* boss1Ptr(nullptr);
    boss1Ptr = &boss1;

    sf::Texture backGround;
    backGround.setSmooth(true);
    if(!backGround.loadFromFile("Spritesheet/background.jpg", sf::IntRect (0, 0, 680, 544)))
    {
        qDebug() << "fail to load background";
    }

    RenderWindow window(VideoMode(680, 544), "BOSS FIGHT");

    while (window.isOpen())
    {
        Event e;
        sf::Sprite spriteBackGround(backGround);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            joueur1Ptr->moveUp();
            joueur1Ptr->testCollisionUp(boss1Ptr);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            joueur1Ptr->moveRight();
            joueur1Ptr->testCollisionRight(boss1Ptr);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            joueur1Ptr->moveLeft();
            joueur1Ptr->testCollisionLeft(boss1Ptr);
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            joueur1Ptr->moveDown();
            joueur1Ptr->testCollisionDown(boss1Ptr);
        }

        //Gérer le temps entre 2 attaques
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            attacking = true;
            if (attaqueSpeed == 500)
            {
                qDebug() << "attaque";
                joueur1Ptr->testAttaque(boss1Ptr);
                attaqueSpeed = 0;
            }
        }

        //Affichage des sprites d'attaque en fonction de la direction
        if (attacking)
        {
            if (joueur1Ptr->getDirection() == "left")
            {
                joueur1Ptr->afficheSpriteAttaqueLeft();
            }
            if (joueur1Ptr->getDirection() == "right")
            {
                joueur1Ptr->afficheSpriteAttaqueRight();
            }
            if (joueur1Ptr->getDirection() == "up")
            {
                joueur1Ptr->afficheSpriteAttaqueUp();
            }
            if (joueur1Ptr->getDirection() == "down")
            {
                joueur1Ptr->afficheSpriteAttaqueDown();
            }
            if (joueur1Ptr->getCompteurAttaque() == 5)
            {
                attacking = false;
            }
        }

        if (boss1Ptr->getCurrentHealth() <= 0)
        {
            qDebug() << "isDead";
            boss1Ptr->setCurrentHealth(0);
            boss1Ptr->setIsDead(true);
            boss1Ptr->death();
        }

        while (window.pollEvent(e))
        { if (e.type == Event::Closed)
            { window.close();
                Game::getInstance()->setRootVisibility(true);
//                qDebug() << Game::getInstance()->rootVisibility();
                Game::getInstance()->load();
            }
        }
        window.clear();
        window.draw(spriteBackGround);
        window.draw(joueur1Ptr->getSprite());
        window.draw(boss1Ptr->getSprite());

//        if(Game::getInstance()->getCompteurText() < 500)
//        {
//            window.draw(Game::getInstance()->getTextDamages());
//            Game::getInstance()->setCompteurText(Game::getInstance()->getCompteurText()+1);
//        }
//        else
//        {
//            Game::getInstance()->setCompteurText(0);
//            Game::getInstance()->setTextDamages(Game::getInstance()->getResetText());
//        }
        window.display();
        if (attaqueSpeed < 500)
        {
            attaqueSpeed++;
        }
    }
}




