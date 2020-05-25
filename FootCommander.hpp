#include <string>
#include <vector>
#include <stdexcept>
/* #include "Soldier.hpp"
 */
namespace WarGame
{
class FootCommander:public Soldier
{
private:
public:
    FootCommander(uint _player) : Soldier(_player, 1, 150, 20){}
    ~FootCommander();
};



} // namespace WarGame