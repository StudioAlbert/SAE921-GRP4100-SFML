#pragma once

#include "SFML/Graphics.hpp"
#include "fireBallLauncher.h"

class Game
{

private:
	sf::RenderWindow window;
	FireBallLauncher launcher;

public:
	void Init();
	unsigned int Loop();

};
