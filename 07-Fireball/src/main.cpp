

#include <iostream>

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"

#include "game.h"

int main()
{
	// Create the game
	Game game;

	// Init the game
	game.Init();

	// Run the game
	return game.Loop();

}
