#include "livingentities.h"
#include <QDebug>
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include "sfml.h"
#include "game.h"


LivingEntities::LivingEntities()
    : m_compteurMort(0), m_contact(false), m_compteurAttaque(5)
{
    //Game::getInstance()->setCompteurText(0);
}

LivingEntities::~LivingEntities()
{
}


int LivingEntities::getCurrentHealth() const
{
    return m_currentHealth;
}

void LivingEntities::setCurrentHealth(int currentHealth)
{
    m_currentHealth = currentHealth;
}

int LivingEntities::getMaxHealth() const
{
    return m_maxHealth;
}

void LivingEntities::takeDamage(int degats)
{
    m_currentHealth -= degats;

//    Game::getInstance()->getTextDamages().setFont(Game::getInstance()->getTextFont());
//    Game::getInstance()->getTextDamages().setString(std::to_string(degats));
//    Game::getInstance()->getTextDamages().setCharacterSize(12);
//    Game::getInstance()->getTextDamages().setColor(sf::Color(255, 0, 0, 255));
//    Game::getInstance()->getTextDamages().setPosition(m_sprite.getPosition());
    qDebug() << m_currentHealth;
}

void LivingEntities::attaque(LivingEntities* ennemi)
{
    ennemi->takeDamage(m_degats);
}

int LivingEntities::getDegats() const
{
    return m_degats;
}

void LivingEntities::setDegats(int degats)
{
    m_degats = degats;
}

void LivingEntities::initSprite()
{
    if (!m_textureLE.loadFromFile(m_url))
    {
        qDebug() << "fail to load sprite";
    }

    m_sprite.setTexture(m_textureLE);
    m_sprite.setOrigin(32, 32);
    m_sprite.setPosition(64, 64);
    m_sprite.setTextureRect(sf::IntRect (0, 703, 64, 64));

}

sf::Sprite LivingEntities::getSprite() const
{
    return m_sprite;
}

void LivingEntities::setSprite(const sf::Sprite &sprite)
{
    m_sprite = sprite;
}

void LivingEntities::setIsDead()
{
    m_isDead = true;
}

bool LivingEntities::getIsDead() const
{
    return m_isDead;
}

void LivingEntities::testAttaque(LivingEntities* ennemi)
{
    if (m_contact)
    {
        attaque(ennemi);
    }
}

void LivingEntities::afficheSpriteAttaqueLeft()
{
    if (m_compteurAttaque == 0)
    {
        m_compteurAttaque = 5;
    }
    if (m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteurAttaque * 64)-1, 832, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteurAttaque--;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

void LivingEntities::afficheSpriteAttaqueRight()
{
    if (m_compteurAttaque == 0)
    {
        m_compteurAttaque = 5;
    }
    if (m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteurAttaque * 64)-1, 959, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteurAttaque--;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

void LivingEntities::afficheSpriteAttaqueUp()
{
    if (m_compteurAttaque == 0)
    {
        m_compteurAttaque = 5;
    }
    if (m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteurAttaque * 64)-1, 767, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteurAttaque--;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

void LivingEntities::afficheSpriteAttaqueDown()
{
    if (m_compteurAttaque == 0)
    {
        m_compteurAttaque = 5;
    }
    if(m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteurAttaque * 64)-1, 895, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteurAttaque--;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

std::string LivingEntities::getDirection() const
{
    return m_direction;
}

void LivingEntities::setDirection(const std::string &direction)
{
    m_direction = direction;
}

int LivingEntities::getCompteurAttaque() const
{
    return m_compteurAttaque;
}

void LivingEntities::death()
{
    qDebug() << "DEATH()";
    qDebug() << m_compteurMort;

    if (m_compteurMort == 6)
    {
        m_currentHealth = 100;
        m_isDead = false;
    }
    if(m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteurMort * 64)-1, 1279, 64, 64));
        m_compteurMort++;
        m_timer = 0;
    }
    else
    {
        qDebug() << "m_timer++";
        m_timer++;
        qDebug() << m_timer;
    }
}



