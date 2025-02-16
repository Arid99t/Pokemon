#ifndef GAME_HPP
#define GAME_HPP




#include "include/Pokemon/Grass.hpp"

class Player;

class Game {
private:
	Grass forestGrass;
public:
	Game();
	void gameLoop(Player& player);
};

#endif // !GAME_HPP