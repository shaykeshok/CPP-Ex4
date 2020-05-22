#include <string>
#include <vector>
#include <stdexcept>
/* #include "Point.hpp"*/
namespace WarGame
{
class Soldier
{
protected:
   int health;
   int damage;
   //Point position;
   int steps=1;
public:
    Soldier();
    ~Soldier();
    void attack();
};



}