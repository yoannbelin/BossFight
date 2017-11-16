#include "boss.h"
#include <QDebug>

Boss::Boss()
{
}

Boss::Boss(std::string url, int degats, int maxHealth, int currentHealth)
{
    m_degats = degats;
    m_url = url;
    initSprite();
    m_maxHealth = maxHealth;
    m_currentHealth = currentHealth;
    m_textureLE.loadFromFile(url);
    m_timer = 0;
}

void Boss::setIsDead(bool isDead)
{
    m_isDead = isDead;
}

void Boss::initSprite()
{
    if (!m_textureLE.loadFromFile(m_url))
    {
        qDebug() << "fail load sprite";
    }
    m_sprite.setTexture(m_textureLE);
    m_sprite.setOrigin(32, 32);
    m_sprite.setPosition(428, 300);
    m_sprite.setTextureRect(sf::IntRect (0, 1151, 64, 64));
}



