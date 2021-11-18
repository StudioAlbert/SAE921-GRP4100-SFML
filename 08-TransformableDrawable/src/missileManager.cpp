#include "missileManager.h"
#include "SFMLUtils_Vector.h"

void MissileManager::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (auto& m : missiles) {
		target.draw(m, states);
	}
}

void MissileManager::update()
{
	for (auto& m : missiles) {
		m.update();
	}
}

void MissileManager::AddMissile(sf::Vector2f startPos, sf::Vector2f pointTo)
{
	
	sf::Vector2f direction = SFMLUtils::normalize(sf::Vector2f(pointTo - startPos));

	missiles.emplace_back(
		Missile(
			"data/missile/missile_0.png", 
			startPos, 
			direction, 
			SFMLUtils::RadToDeg(SFMLUtils::alignTo(startPos, pointTo))
		)
	);
}


