#pragma once

#include "SFML/Graphics.hpp"

#include "reticle.h"
#include "missileManager.h"

class Game
{
private:
	sf::RenderWindow window;
	Reticle reticle;

	MissileManager missileManager;

	sf::Sprite m_placeholder;
	sf::Texture m_placeholderTexture;

public:
	Game();

	void Init();
	int Loop();

};