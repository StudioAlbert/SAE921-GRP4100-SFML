#include <sstream>
#include <iomanip>

#include "fireBallLauncher.h"

void FireBallLauncher::Init()
{
	LoadFolder(pinkBalls, "data/pinkBalls/");
	LoadFolder(redBalls, "data/redBalls/");
	LoadFolder(blueBalls, "data/blueBalls/");

}

void FireBallLauncher::LaunchABall(sf::Vector2f& startPos, sf::Vector2f& direction)
{
    balls.emplace_back(FireBall(pinkBalls, direction, startPos));
}

void FireBallLauncher::LoadFolder(std::vector<sf::Texture>& animation, const std::string folderPath)
{
    // Animation
    // Load every textures --------------------------------------------------------------------------------------------------
    sf::Texture newTexture;
    std::string path;
    int idxTexture = 1;
    bool loaded = false;

    do
    {   
        path = GetPath(folderPath, idxTexture);
        loaded = newTexture.loadFromFile(path);
        if(loaded) {
            animation.push_back(newTexture);
            idxTexture++;
        }

    }while (loaded);

}

std::string FireBallLauncher::GetPath(const std::string folderPath, int index)
{
    std::stringstream ss;
    ss << folderPath << std::setw(1) << std::setfill('0') << index << ".png";
    return ss.str();
}

void FireBallLauncher::UpdateBalls() {
    for (auto& ball : balls) {
        ball.Update();
    }
}


void FireBallLauncher::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    for (auto& ball : balls) {
        target.draw(ball);
    }
}
