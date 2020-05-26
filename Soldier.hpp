
#pragma once
#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame
{
class Soldier
{
public:
    uint player;
    int health;
    int damage;
    int steps;

    Soldier(uint playerID, int _steps, uint _health,  uint _damage = 0) : player(playerID), health(_health), damage(_damage), steps(_steps) {}
    ~Soldier(){};

    void active();
};

} // namespace WarGame