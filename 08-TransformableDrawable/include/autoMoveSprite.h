#pragma once

#include "SFML/Graphics.hpp"

class AutoMoveSprite : public sf::Drawable, public sf::Transformable
{
public:
	AutoMoveSprite(const std::string texturePath, const sf::Vector2f startPos, const sf::Vector2f direction, const float angle);
	~AutoMoveSprite();

	// DRAWABLE OVERRIDES
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	void update();

private:
	sf::Vector2f m_direction;
	sf::Sprite	m_sprite;

	sf::Texture m_texture;

};