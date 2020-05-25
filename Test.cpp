#include <string>
#include <iostream>
#include "doctest.h"
#include "Board.hpp"
#include "Soldier.hpp"
#include "FootSoldier.hpp"
#include "FootCommander.hpp"
#include "SniperCommander.hpp"
#include "ParamedicCommander.hpp"
#include "Sniper.hpp"
#include "Paramedic.hpp"
#include <typeinfo>

using namespace std;
using namespace WarGame;

TEST_CASE("Add soldires to the board")
{

    WarGame::Board b(6, 6);
    CHECK_FALSE(b.has_soldiers(1));
    CHECK_FALSE(b.has_soldiers(2));

    b[{0, 0}] = new FootSoldier(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 1}] = new Sniper(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 2}] = new FootCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 3}] = new SniperCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{1, 1}] = new Paramedic(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{1, 3}] = new Paramedic(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{2, 3}] = new FootSoldier(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{3, 0}] = new Sniper(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 0}] = new ParamedicCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 4}] = new SniperCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 5}] = new ParamedicCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{5, 4}] = new FootCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));

    CHECK(typeid(b[{0, 0}]) == typeid(FootSoldier));
    CHECK(typeid(b[{0, 1}]) == typeid(Sniper));
    CHECK(typeid(b[{0, 2}]) == typeid(FootCommander));
    CHECK(typeid(b[{0, 3}]) == typeid(SniperCommander));
    CHECK(typeid(b[{1, 1}]) == typeid(Paramedic));
    CHECK(typeid(b[{1, 3}]) == typeid(Paramedic));
    CHECK(typeid(b[{2, 3}]) == typeid(FootSoldier));
    CHECK(typeid(b[{3, 0}]) == typeid(Sniper));
    CHECK(typeid(b[{4, 0}]) == typeid(ParamedicCommander));
    CHECK(typeid(b[{4, 0}]) == typeid(SniperCommander));
    CHECK(typeid(b[{4, 5}]) == typeid(ParamedicCommander));
    CHECK(typeid(b[{5, 4}]) == typeid(FootCommander));

    CHECK_FALSE(typeid(b[{0, 0}]) == typeid(FootCommander));
    CHECK_FALSE(typeid(b[{0, 1}]) == typeid(FootSoldier));
    CHECK_FALSE(typeid(b[{0, 2}]) == typeid(SniperCommander));
    CHECK_FALSE(typeid(b[{0, 3}]) == typeid(Paramedic));
    CHECK_FALSE(typeid(b[{1, 1}]) == typeid(Sniper));
    CHECK_FALSE(typeid(b[{1, 3}]) == typeid(ParamedicCommander));
    CHECK_FALSE(typeid(b[{2, 3}]) == typeid(Paramedic));
    CHECK_FALSE(typeid(b[{3, 0}]) == typeid(ParamedicCommander));
    CHECK_FALSE(typeid(b[{4, 0}]) == typeid(FootCommander));
    CHECK_FALSE(typeid(b[{4, 0}]) == typeid(FootCommander));
    CHECK_FALSE(typeid(b[{4, 5}]) == typeid(SniperCommander));
    CHECK_FALSE(typeid(b[{5, 4}]) == typeid(FootSoldier));
    //50


}

TEST_CASE("Move soldires")
{
    WarGame::Board b(6, 6);
    CHECK_FALSE(b.has_soldiers(1));
    CHECK_FALSE(b.has_soldiers(2));

    b[{0, 0}] = new FootSoldier(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 1}] = new Sniper(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 2}] = new FootCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{0, 3}] = new SniperCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{1, 1}] = new Paramedic(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{1, 3}] = new Paramedic(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{2, 3}] = new FootSoldier(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{3, 0}] = new Sniper(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 0}] = new ParamedicCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 4}] = new SniperCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{4, 5}] = new ParamedicCommander(1);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    b[{5, 4}] = new FootCommander(2);
    CHECK(b.has_soldiers(1));
    CHECK(b.has_soldiers(2));
    //26

    b.move(1, {0, 0}, WarGame::Board::Up);
    CHECK(b[{0, 0}] == nullptr);
    // const type_info& ti1 = typeid(b[{1, 0}]); 
    CHECK(typeid(b[{1, 0}]) == typeid(FootSoldier));
    CHECK_FALSE(typeid(b[{0, 0}]) == typeid(FootSoldier));

    

    b.move(1, {0, 1}, WarGame::Board::Right);
    CHECK(b[{0, 1}] == nullptr);
    CHECK(typeid(b[{0, 2}]) == typeid(Sniper));
    CHECK_FALSE(typeid(b[{0, 0}]) == typeid(Sniper));

    b.move(1, {0, 2}, WarGame::Board::Up);
    CHECK(b[{0, 2}] == nullptr);
    CHECK_FALSE(typeid(b[{0, 2}]) == typeid(FootCommander));
    CHECK(typeid(b[{1, 2}]) == typeid(FootCommander));

    b.move(2, {0, 3}, WarGame::Board::Right);
    CHECK(b[{0, 3}] == nullptr);
    CHECK(typeid(b[{0, 4}]) == typeid(SniperCommander));
    CHECK_FALSE(typeid(b[{0, 3}]) == typeid(SniperCommander));

    b.move(1, {1, 1}, WarGame::Board::Up);
    CHECK(b[{1, 1}] == nullptr);
    CHECK(typeid(b[{2, 1}]) == typeid(Paramedic));
    CHECK_FALSE(typeid(b[{1, 1}]) == typeid(Paramedic));

    b.move(2, {1, 3}, WarGame::Board::Right);
    CHECK(b[{1, 3}] == nullptr);
    CHECK(typeid(b[{1, 4}]) == typeid(Paramedic));
    CHECK_FALSE(typeid(b[{1, 3}]) == typeid(Paramedic));

    b.move(2, {2, 3}, WarGame::Board::Right);
    CHECK(b[{2, 3}] == nullptr);
    CHECK(typeid(b[{2, 4}]) == typeid(FootSoldier));
    CHECK_FALSE(typeid(b[{2, 3}]) == typeid(FootSoldier));

    b.move(2, {3, 0}, WarGame::Board::Right);
    CHECK(b[{3, 0}] == nullptr);
    CHECK(typeid(b[{3, 1}]) == typeid(Sniper));
    CHECK_FALSE(typeid(b[{3, 0}]) == typeid(Sniper));
}
