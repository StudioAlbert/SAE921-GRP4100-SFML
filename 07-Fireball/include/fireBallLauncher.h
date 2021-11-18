#pragma once
#include <string>
#include <vector>

#include "SFML/Graphics/Texture.hpp"

#include "fireBall.h"

class FireBallLauncher : public sf::Drawable 
{

public:
	enum class ballColor
	{
		pink,
		red,
		blue
	};

	void Init();

	void UpdateBalls();
	void LaunchABall(sf::Vector2f& startPos, sf::Vector2f& direction);

	// DRAwABLE
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;


private:
	std::vector<sf::Texture>	pinkBalls;
	std::vector<sf::Texture>	redBalls;
	std::vector<sf::Texture>	blueBalls;

	std::vector<FireBall>		balls;

	void LoadFolder(std::vector<sf::Texture>& animation, const std::string folderPath);
	std::string GetPath(const std::string folderPath, int index);

};

