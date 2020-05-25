#include <string>
#include <vector>
#include <stdexcept>
#include "Soldier.hpp"

namespace WarGame
{
class Paramedic : public Soldier
{
private:
public:
    Paramedic(uint _player) : Soldier(_player, 1, 100, 10) {}
    ~Paramedic();
};

} // namespace WarGame