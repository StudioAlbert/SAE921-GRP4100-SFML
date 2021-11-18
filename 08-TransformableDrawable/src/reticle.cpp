
#include "reticle.h"

Reticle::Reticle() {

	m_Texture.loadFromFile("data/crosshair1.png");

	m_sprite.setTexture(m_Texture);
	m_sprite.setOrigin(m_Texture.getSize().x * 0.5f, m_Texture.getSize().y * 0.5f);

}

void Reticle::draw(sf::RenderTarget& target, sf::RenderStates states) const {

	states.transform *= getTransform();

	// You can draw other high-level objects
	target.draw(m_sprite, states);

}
