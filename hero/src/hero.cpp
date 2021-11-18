#include "hero.h"

Hero::Hero() {

}

bool Hero::isTouched(sf::Vector2f mousePos) {
	return btn.contains(mousePos);
}

void Hero::drawHero(sf::RenderWindow& window) {
	window.draw(_sprite);
}