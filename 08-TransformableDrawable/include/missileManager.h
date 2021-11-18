#pragma once

#include "missile.h"

class MissileManager : public sf::Drawable {

private:
	std::vector<Missile> missiles;

public:
	// DRAWABLE OVERRIDES
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
	void update();

	void AddMissile(sf::Vector2f startPos, sf::Vector2f pointTo);

};