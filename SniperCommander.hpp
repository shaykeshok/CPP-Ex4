#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
class SniperCommander:public Soldier
{
private:
public:
    SniperCommander(uint _player) : Soldier(_player, 1, 150, 20){}
    ~SniperCommander();
};



} // namespace WarGame