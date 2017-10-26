#include "livingentities.h"
#include "qdebug.h"

LivingEntities::LivingEntities()
    : m_maxHealth (100), m_currentHealth (100)
{}

float LivingEntities::getCurrentHealth() const
{
    return m_currentHealth;
}

float LivingEntities::getMaxHealth() const
{
    return m_maxHealth;
}

void LivingEntities::takeDamage(float degats)
{
    m_currentHealth -= degats;
}

void LivingEntities::attaque(LivingEntities* ennemi)
{
    ennemi->takeDamage(m_degats);
}

int LivingEntities::getDegats() const
{
    return m_degats;
}

void LivingEntities::setDegats(float degats)
{
    m_degats = degats;
}

void LivingEntities::initSprite()
{
    if (!m_texture1.loadFromFile(m_url))
        {
            qDebug() << "fail load sprite";
        }

    m_sprite.setPosition(600, 300);
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
