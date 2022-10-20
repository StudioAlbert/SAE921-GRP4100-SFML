#include "hero.h"

Hero::Hero() {

}

bool Hero::isTouched(sf::Vector2f mousePos) {
	return btn.contains(sf::Vector2i(mousePos));
}

void Hero::drawHero(sf::RenderWindow& window) {
	window.draw(_sprite);
}