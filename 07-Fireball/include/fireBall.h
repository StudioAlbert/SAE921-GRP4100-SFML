#pragma once

#include "SFML/Graphics.hpp"

constexpr float speed = 2.0f;

class FireBall : public sf::Transformable, public sf::Drawable
{

private:
	sf::Sprite m_sprite;
	sf::CircleShape m_placeholder;

	std::vector<sf::Texture>& m_animation;
	sf::Vector2f m_direction;

	float m_ballSize = 0;

	int m_idxAnimation = 0;

public:

	FireBall(std::vector<sf::Texture>& animation, sf::Vector2f startPosition, sf::Vector2f direction);

	void Update();
	//void Draw(sf::RenderWindow&);

	bool IsDead(sf::RenderWindow&);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

};