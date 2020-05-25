#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"
namespace WarGame
{
class Sniper : public Soldier
{
private:
public:
    Sniper(uint _player) : Soldier(_player, 1, 100, 10) {}

    ~Sniper();
};

} // namespace WarGame