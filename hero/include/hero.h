#pragma once

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"

class Hero
{
public:
	Hero();
	void update();
	void drawHero(sf::RenderWindow& window);
	bool isTouched(sf::Vector2f mousePos);
	
private:
	sf::RectangleShape _sprite;
	sf::IntRect btn;

 };
