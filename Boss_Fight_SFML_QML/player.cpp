#include "player.h"
#include <qdebug.h>

Player::Player()
{

}

Player::Player(int degats, std::string url)
{
    m_degats = degats;
    m_url = url;
    initSprite();
}

void Player::moveRight()
{

    m_sprite.setTextureRect(sf::IntRect(0, 703, 64, 64));
    m_sprite.move(0.10, 0);
}
