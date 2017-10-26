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

    float getCurrentHealth() const;
    void setCurrentHealth(float currentHealth);

    float getMaxHealth() const;
    void setMaxHealth(float maxHealth);

    float getMoveSpeed() const;
    void setMoveSpeed(float moveSpeed);

    bool getIsDead() const;
    void setIsDead(bool isDead);

    void move();

    void attaque(LivingEntities* ennemi);
    void takeDamage(float degats);

    int getDegats() const;
    void setDegats(float degats);

    void initSprite();

    sf::Sprite getSprite() const;
    void setSprite(const sf::Sprite &sprite);

protected:
    std::string m_nom;

    float m_currentHealth;

    float m_maxHealth;

    float m_moveSpeed;

    int m_degats;

    bool m_isDead = false;

    sf::Texture m_texture1;

    sf::Sprite m_sprite;

    std::string m_url;


};

#endif // LIVINGENTITIES_H
