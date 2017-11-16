#ifndef PLAYER_H
#define PLAYER_H

#include "livingentities.h"

class Player : public LivingEntities
{
public:
    Player();

    Player(std::string, int, int, int);

    void heal(LivingEntities*, float healingAmount);

    void moveRight();
    void moveLeft();
    void moveUp();
    void moveDown();

    void initSprite();

    void testCollisionRight(LivingEntities* ennemi);
    void testCollisionLeft(LivingEntities* ennemi);
    void testCollisionUp(LivingEntities* ennemi);
    void testCollisionDown(LivingEntities* ennemi);
};

#endif // PLAYER_H
