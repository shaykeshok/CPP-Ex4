#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame
{
class FootSoldier : public Soldier
{
private:
public:
    FootSoldier(uint _player) : Soldier(_player, 1, 100, 10) {}

    ~FootSoldier();
};

} // namespace WarGame