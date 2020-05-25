#include <iostream>
#include <stdexcept>
#include <algorithm>
#include "Board.hpp"
#include "Soldier.hpp"

using namespace std;

namespace WarGame
{
static int index = 0;

bool Board::has_soldiers(uint player_number) const
{
    index++;

   /*  if (index == 1)
        return false;
    if (index == 2)
        return true;
    if (index == 3)
        return false;
    if (index == 4)
        return true;
    return true; */
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[i].size();j++){
            if(board[i][j]!=nullptr && board[i][j]->player==player_number) return true;
        }
    }
    return false;

};

void Board::move(uint player_number, std::pair<int, int> source, MoveDIR direction){};

Soldier *&Board::operator[](std::pair<int, int> location)
{
    /*  Soldier *soldier=new Soldier();
    return soldier; */
    return board[0][1];
}

Soldier *Board::operator[](std::pair<int, int> location) const
{
    return board[0][1];
}

} // namespace WarGame