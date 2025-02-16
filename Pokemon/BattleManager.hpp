#pragma once
#ifndef BATTLEMANAGER_HPP
#define BATTLEMANAGER_HPP

// BattleManager.hpp


#include "include/Battle/BattleState.hpp"
#include "include/Character/Player/Player.hpp"

class BattleManager {
public:
    void startBattle(Player& player, Pokemon& wildPokemon);
private:
    BattleState battleState;  // New BattleState object to track the battle

    void battle();
    void handleBattleOutcome();
    void updateBattleState(); // Method to update the battle state after each turn
};


#endif