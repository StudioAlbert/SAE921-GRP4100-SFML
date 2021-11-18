#pragma once

#define USE_MATHS_DEFINES
#include <cmath>

static class SFMLUtils {
    
public:
    static sf::Vector2f normalize(const sf::Vector2f& vec) {
        
        float fMagnitude = SFMLUtils::magnitude(vec);

        if (fMagnitude > 0) {
            return sf::Vector2f(vec.x / fMagnitude, vec.y / fMagnitude);
        }
        else {
            return sf::Vector2f(0, 0);
        }
    }

    static float magnitude(const sf::Vector2f& vec) {
        return std::sqrt(vec.x * vec.x + vec.y * vec.y);
    }

    static float alignTo(const sf::Vector2f fromPt, const sf::Vector2f toPt)
    {
        //var angle = Math.atan2(stage.mouseY – jetSprite.y, stage.mouseX – jetSprite.x);

        //angle = angle * (180 / Math.PI);
        
        return std::atan2f(toPt.y - fromPt.y, toPt.x - fromPt.x);


    }

    static float angle(const sf::Vector2f v1, const sf::Vector2f v2) {
        return std::acos((v1.x * v2.x + v1.y * v2.y) / (std::sqrt(v1.x * v1.x + v1.y * v1.y) * std::sqrt(v2.x * v2.x + v2.y * v2.y)));        
    }

    static float degToRad(float deg) {
        return 3.14f * deg / 180.0f;
    }

    static float RadToDeg(float rad) {
        return 180.0f * rad / 3.14f;
    }

    static float CrossProduct(const sf::Vector2f& v1, const sf::Vector2f& v2)
    {
        return (v1.x * v2.y) - (v1.y * v2.x);
    }
};

