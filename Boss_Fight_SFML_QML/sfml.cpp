#include "player.h"
#include "boss.h"
#include "sfml.h"
#include <QDebug>
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

Sfml::Sfml(QObject *parent) : QObject(parent)
{

}

Sfml::testSFML()
{
//    std::cout << "PLAY" << std::endl;
//    RenderWindow window(VideoMode(800, 600), "SFML dans Qt ouvert depuis le QML !!");
//    int counter = 8;
//    int timer = 0;
//    sf::Texture texture;
//    sf::Texture texture2;
//    sf::Texture texture3;
//    sf::Texture rect;
//    sf::Texture test;




    //    rect.setPosition(Vector2f(200, 300));
    //    rect.setSize(Vector2f(30, 30));
    //    rect.setFillColor(Color(33, 42, 2, 255));

//    if (!texture.loadFromFile("C:/Qt/testSFML/monProjet/PNG/mapTile_031.png"))
//    {
//        return EXIT_FAILURE;
//    }

//    if (!texture2.loadFromFile("C:/Qt/testSFML/monProjet/PNG/mapTile_032.png"))
//    {
//        return EXIT_FAILURE;
//    }

//    if (!texture3.loadFromFile("C:/Qt/testSFML/monProjet/PNG/mapTile_033.png"))
//    {
//        return EXIT_FAILURE;
//    }






//    if (!rect.loadFromFile("C:/Boss_Fight_Main/Boss_Fight_SFML_QML/Spritesheet/test.png"))
//    {
//        return EXIT_FAILURE;
//    }

//    if (!test.loadFromFile("C:/Boss_Fight_Main/Boss_Fight_SFML_QML/Spritesheet/sokoban_tilesheet.png"))
//    {
//        return EXIT_FAILURE;
//    }

//    // création du sprite à partir de la texture
//    sf::Sprite sprite(texture);
//    sf::Sprite sprite2(texture2);
//    sf::Sprite sprite3(texture3);
//    sf::Sprite spritePerso(rect);
//    sf::Sprite spriteTest(test);
//    spriteTest.setPosition(600, 300);
//    spriteTest.setTextureRect(sf::IntRect (704, 192, 64, 64));
//    spritePerso.setPosition(428, 300);
//    spritePerso.setTextureRect(sf::IntRect(0, 703, 64, 64));
//    spritePerso.setOrigin(32,32);


    // position du sprite
//    sprite.setPosition(300, 300);
//    sprite2.setPosition(364,300);
//    sprite3.setPosition(428, 300);

//    // lissage de la texture quand elle est zoomée (atténuation de l'effet pixel)
//    texture.setSmooth(true);
//    texture2.setSmooth(true);
//    texture3.setSmooth(true);
//    rect.setSmooth(true);



//    while (window.isOpen())
//    {

//        Event e;

//        //**************************************************************



//        // chargement de la texture









//        //**************************************************************

//        // Attribution des touches pour déplacer "rect"

//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//        {
//            // la touche "flèche gauche" est enfoncée : on bouge le personnage

//            spritePerso.move(0.10, 0);
//            if (timer == 150)
//            {
//                spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 703, 64, 64));
//                timer = 0;
//            }
//            else
//            {
//                timer++;
//            }

//            if (spritePerso.getGlobalBounds().intersects(spriteTest.getGlobalBounds()))
//            {
//                spritePerso.move(-0.10, 0);
//            }

//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
//        {

//            spritePerso.move(0, -0.10);

//            if (timer == 150)
//            {
//                spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 511, 64, 64));
//                timer = 0;
//            }
//            else
//            {
//                timer++;
//            }
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//            {
//                    spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 511, 64, 64));
//                    timer = 0;
//            }
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//            {
//                    spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 511, 64, 64));
//                    timer = 0;
//            }
//            if (spritePerso.getGlobalBounds().intersects(spriteTest.getGlobalBounds()))
//            {
//                spritePerso.move(0, 0.10);
//            }
//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
//        {
//            spritePerso.move(0, 0.10);
//            if (timer == 150)
//            {
//                spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 639, 64, 64));
//                timer = 0;
//            }
//            else
//            {
//                timer++;
//            }
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//            {
//                    spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 639, 64, 64));
//                    timer = 0;
//            }
//            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
//            {
//                    spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 639, 64, 64));
//                    timer = 0;
//            }
//            if (spritePerso.getGlobalBounds().intersects(spriteTest.getGlobalBounds()))
//            {
//                spritePerso.move(0, -0.10);
//            }

//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
//        {
//            spritePerso.move(-0.10, 0);
//            if (timer == 150)
//            {
//                spritePerso.setTextureRect(sf::IntRect((counter * 64)-1, 575, 64, 64));
//                timer = 0;
//            }
//            else
//            {
//                timer++;
//            }
//            if (spritePerso.getGlobalBounds().intersects(spriteTest.getGlobalBounds()))
//            {
//                spritePerso.move(0.10, 0);
//            }

//        }


//        counter--;

//        if(counter == 0)
//        {
//            counter = 8;
//        }
//        //**************************************************************

//        // Attribution des touches pour déplacer "test"

//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
//        {

//            spriteTest.move(0.10, 0);
//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z))
//        {
//            spriteTest.move(0, -0.10);
//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
//        {
//            spriteTest.move(0, 0.10);
//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
//        {
//            spriteTest.move(-0.10, 0);
//        }

//        //**************************************************************

//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
//        {
//            spriteTest.setPosition(500, 500);
//            spritePerso.setPosition(500, 500);
//        }
//        if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl))
//        {
//            spritePerso.setPosition(Vector2f(200, 300));
//            spriteTest.setPosition(Vector2f(600, 300));
//        }
//        while (window.pollEvent(e))
//        { if (e.type == Event::Closed)
//            { window.close();
//            }
//        }
//        window.clear();
//        //        window.draw(image);
//        window.draw(sprite);
//        window.draw(sprite2);
//        window.draw(sprite3);
//        window.draw(spritePerso);
//        window.draw(spriteTest);

//        window.display();
//    }
}

