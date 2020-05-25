#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
class ParamedicCommander:public Soldier
{
private:
public:
    ParamedicCommander(uint _player) : Soldier(_player, 1, 150, 20){}
    ~ParamedicCommander();
};



} // namespace WarGame