#include "autoMoveSprite.h"
#include "SFMLUtils_Vector.h"

AutoMoveSprite::AutoMoveSprite(const std::string texturePath, const sf::Vector2f startPos, const sf::Vector2f direction, const float angle) : m_direction(direction) {

	if (!m_texture.loadFromFile(texturePath)) {
		return;
	}
	setPosition(startPos);

	m_sprite.setTexture(m_texture);
	m_sprite.setOrigin(m_texture.getSize().x * 0.5f, m_texture.getSize().y * 0.5f);
	m_sprite.setRotation(angle);

}

AutoMoveSprite::~AutoMoveSprite()
{
	//m_texture.~Texture();
}

void AutoMoveSprite::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	states.transform *= getTransform();
	target.draw(m_sprite, states);
}

void AutoMoveSprite::update()
{
	sf::Vector2f pos = getPosition();
	pos += m_direction;
	
	setPosition(pos);

	m_sprite.setTexture(m_texture);

}
