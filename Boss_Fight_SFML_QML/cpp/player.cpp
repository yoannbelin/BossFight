#include "player.h"
#include <QDebug>

Player::Player()
{
}

Player::Player(std::string url, int degats, int maxHealth, int currentHealth)
{
    m_url = url;
    initSprite();
    m_degats = degats;
    m_maxHealth = maxHealth;
    m_currentHealth = currentHealth;
    m_compteur = 0;
    m_timer = 0;
    m_direction = "right";
    m_textureLE.loadFromFile(url);
}

void Player::initSprite()
{
    if (!m_textureLE.loadFromFile(m_url))
    {
        qDebug() << "fail load sprite";
    }
    m_sprite.setTexture(m_textureLE);
    m_sprite.setOrigin(32, 32);
    m_sprite.setPosition(64, 267);
    m_sprite.setTextureRect(sf::IntRect (0, 703, 64, 64));
}

void Player::heal(LivingEntities *, float healingAmount)
{
    m_currentHealth += healingAmount;

    if (m_currentHealth >= m_maxHealth)
    {
        m_currentHealth = m_maxHealth;
    }
}

void Player::testCollisionRight(LivingEntities *ennemi)
{
    if (m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_sprite.move(-0.10, 0);
        m_contact = true;

    }
    else if (!m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_contact = false;
    }


}

void Player::testCollisionLeft(LivingEntities *ennemi)
{
    if (m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_sprite.move(0.10, 0);
        m_contact = true;

    }
    else if (!m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_contact = false;
    }

}

void Player::testCollisionUp(LivingEntities *ennemi)
{
    if (m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_sprite.move(0, 0.10);
        m_contact = true;

    }
    else if (!m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_contact = false;
    }

}

void Player::testCollisionDown(LivingEntities *ennemi)
{
    if (m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_sprite.move(0, -0.10);
        m_contact = true;

    }
    else if (!m_sprite.getGlobalBounds().intersects(ennemi->getSprite().getGlobalBounds()))
    {
        m_contact = false;
    }

}



void Player::moveLeft()
{
    m_direction = "left";
    m_sprite.move(-0.10, 0);



    if (m_compteur == 9)
    {
        m_compteur = 0;
    }

    if (m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 575, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteur++;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

void Player::moveRight()
{
    m_direction = "right";
    m_sprite.move(0.10, 0);

    if (m_compteur == 9)
    {
        m_compteur = 0;
    }

    if(m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteur* 64)-1, 703, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteur++;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }

}

void Player::moveUp()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        m_direction = "right";
        m_sprite.move(0, -0.10);

        if (m_compteur == 9)
        {
            m_compteur = 0;
        }
        if (m_timer == 150)
        {
            m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 703, 64, 64));
            m_sprite.setOrigin(32, 32);
            m_compteur++;
            m_timer = 0;
        }
        else
        {
            m_timer++;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        m_direction = "left";
        m_sprite.move(0, -0.10);

        if (m_compteur == 9)
        {
            m_compteur = 0;
        }
        if (m_timer == 150)
        {
            m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 575, 64, 64));
            m_sprite.setOrigin(32, 32);
            m_compteur++;
            m_timer = 0;
        }
        else
        {
            m_timer++;
        }
    }
    else
    {
    m_direction = "up";
    m_sprite.move(0, -0.10);



    if (m_compteur == 9)
    {
        m_compteur = 0;
    }
    if(m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 511, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteur++;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }
    }
}

void Player::moveDown()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
    {
        m_direction = "right";
        m_sprite.move(0, 0.10);

        if (m_compteur == 9)
        {
            m_compteur = 0;
        }
        if (m_timer == 150)
        {
            m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 703, 64, 64));
            m_sprite.setOrigin(32, 32);
            m_compteur++;
            m_timer = 0;
        }
        else
        {
            m_timer++;
        }
    }
    else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
    {
        m_direction = "left";
        m_sprite.move(0, 0.10);

        if (m_compteur == 9)
        {
            m_compteur = 0;
        }
        if (m_timer == 150)
        {
            m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 575, 64, 64));
            m_sprite.setOrigin(32, 32);
            m_compteur++;
            m_timer = 0;
        }
        else
        {
            m_timer++;
        }
    }
    else
    {
    m_direction = "down";
    m_sprite.move(0, 0.10);



    if (m_compteur == 9)
    {
        m_compteur = 0;
    }
    if(m_timer == 150)
    {
        m_sprite.setTextureRect(sf::IntRect((m_compteur * 64)-1, 639, 64, 64));
        m_sprite.setOrigin(32, 32);
        m_compteur++;
        m_timer = 0;
    }
    else
    {
        m_timer++;
    }
    }
}
