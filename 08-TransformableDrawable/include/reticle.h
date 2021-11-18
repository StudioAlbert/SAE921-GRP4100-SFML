#pragma once

#include "SFML/Graphics.hpp"

class Reticle : public sf::Drawable, public sf::Transformable
{
private:
	sf::Sprite m_sprite;
	sf::Texture m_Texture;

public:

	Reticle();

	// DRAWABLE OVERRIDES
	void draw(sf::RenderTarget& target, sf::RenderStates states) const override;

	// TRANSFORMABLE OVERRIDES


};