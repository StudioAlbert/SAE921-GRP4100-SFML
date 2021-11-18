#include "..\include\fireBall.h"
#include <iostream>

FireBall::FireBall(std::vector<sf::Texture>& animation, sf::Vector2f startPosition, sf::Vector2f direction) :
	m_animation(animation),
	m_direction(direction)
{
	
	m_sprite.setPosition(0, 0);
	setPosition(startPosition);

	m_ballSize = std::sqrt(direction.x * direction.x + direction.y * direction.y);
	float newSize = m_ballSize / animation.at(0).getSize().x;
	std::cout << "Size = " << newSize;
	this->setScale(newSize, newSize);
}

void FireBall::Update()
{

	// Position -- -- 
	sf::Vector2f pos = this->getPosition();
	pos.x += m_direction.x / 100;
	pos.y += m_direction.y / 100;

	this->setPosition(pos);
	
	// Sprite position
	m_sprite.setPosition(getPosition());
	m_sprite.setScale(getScale());

	// Animation sprite
	if (m_animation.size() > 0) {
		m_idxAnimation++;
		if (m_idxAnimation >= m_animation.size())
			m_idxAnimation = 0;

		m_sprite.setTexture(m_animation.at(m_idxAnimation));

	}
	else {
		// Placeholder
	}

}

void FireBall::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	if (this->getScale().x > 0) {
		target.draw(m_sprite);
	}
}

bool FireBall::IsDead(sf::RenderWindow& window)
{
	if (this->getScale().x > 0) {
		return m_sprite.getPosition().x > window.getSize().x || m_sprite.getPosition().x < 0 || m_sprite.getPosition().y > window.getSize().y || m_sprite.getPosition().y < 0;
	}
}
