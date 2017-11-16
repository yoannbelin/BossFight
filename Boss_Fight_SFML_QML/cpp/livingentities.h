#ifndef LIVINGENTITIES_H
#define LIVINGENTITIES_H

#include <SFML/Graphics.hpp>
#include "sfml.h"
#include <iostream>
#include <string>


class LivingEntities
{
public:
    LivingEntities();

    std::string getNom() const;
    void setNom(const std::string &nom);

    int getCurrentHealth() const;
    void setCurrentHealth(int currentHealth);

    int getMaxHealth() const;
    void setMaxHealth(int maxHealth);

    float getMoveSpeed() const;
    void setMoveSpeed(float moveSpeed);

    bool getIsDead() const;
    virtual void setIsDead();

    //void move();

    void attaque(LivingEntities* ennemi);
    void takeDamage(int degats);

    int getDegats() const;
    void setDegats(int degats);

    void initSprite();

    sf::Sprite getSprite() const;
    void setSprite(const sf::Sprite &sprite);

    virtual ~LivingEntities();

    sf::Texture getTexture1() const;
    void setTexture1(const sf::Texture &texture1);

    std::string getUrl() const;
    void setUrl(const std::string &url);

    void testAttaque(LivingEntities* ennemi);

    void afficheSpriteAttaqueLeft();
    void afficheSpriteAttaqueRight();
    void afficheSpriteAttaqueUp();
    void afficheSpriteAttaqueDown();

    std::string getDirection() const;
    void setDirection(const std::string &direction);

    int getCompteurAttaque() const;

    void death();



    //void setTextDamages(const sf::Text &textDamages);

    //void afficheText();





protected:
    std::string m_nom;

    int m_currentHealth;

    int m_maxHealth;

    float m_moveSpeed;

    int m_degats;

    int m_compteur;

    int m_compteurMort;

    int m_compteurAttaque;

    int m_timer;

    std::string m_direction;

    bool m_contact;

    bool m_isDead = false;

    bool m_isCollision;

    sf::Texture m_textureLE;

    sf::Sprite m_sprite;

    std::string m_url;


};

#endif // LIVINGENTITIES_H
