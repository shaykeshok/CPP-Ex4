#include <string>
#include <vector>
#include <stdexcept>

namespace WarGame
{
class FootSoldier : public Soldier
{
private:
public:
    FootSoldier(int x_pos,int y_pos){
        health=100;
        damage=10;
        //position.setPosition(x_pos,y_pos)
    };
    ~FootSoldier();
};

} // namespace WarGame