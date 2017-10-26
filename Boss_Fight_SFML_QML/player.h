#ifndef PLAYER_H
#define PLAYER_H
#include "livingentities.h"

class Player : public LivingEntities
{
public:
    Player();

    Player(int, std::string);

    void moveRight();

    void moveLeft();

    void moveUp();

    void moveDown();
};

#endif // PLAYER_H
