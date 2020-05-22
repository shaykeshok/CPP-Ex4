#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
class FootCommander:public Soldier
{
private:
public:
    FootCommander(){
        health=150;
        damage=20;
    };
    ~FootCommander();
};



} // namespace WarGame