#ifndef BOSS_H
#define BOSS_H

#include "livingentities.h"
#include <iostream>
#include <QDebug>

class Boss : public LivingEntities
{
public:
    Boss();

    Boss(std::string, int, int, int);

    void setIsDead(bool isDead);

    void initSprite();
};

#endif // BOSS_H
