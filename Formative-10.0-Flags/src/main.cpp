
#include <iostream>

#define 
#include <math.h>

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "The Game");
_USE_MATH_DEFINES
    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);
    
    sf::Vector2u size = window.getSize();
    size.x;
    size.y;

    //sf::RectangleShape top(sf::Vector2f(size.x, 0.5f*size.y));
    //top.setOrigin(0.5f * top.getSize().x, top.getSize().y);
    //top.setPosition(sf::Vector2f(0.5f * size.x, 0.5f * size.y));
    //top.setFillColor(sf::Color(0, 0, 255));

    //sf::RectangleShape bottom(sf::Vector2f(size.x, 0.5*size.y));
    //bottom.setOrigin(0.5f * bottom.getSize().x, bottom.getSize().y);
    //bottom.setPosition(sf::Vector2f(0.5f * size.x, size.y));
    //bottom.setFillColor(sf::Color(255, 0, 0));

    
    // create an empty shape
    sf::ConvexShape top;
    // resize it to 5 points
    top.setPointCount(4);
    // define the points
    top.setPoint(0, sf::Vector2f(200.0f, 0.0f));
    top.setPoint(1, sf::Vector2f(size.x, 0.0f));
    top.setPoint(2, sf::Vector2f(size.x, 0.5f * size.y - 100.0f));
    top.setPoint(3, sf::Vector2f(0.5f * size.x, 0.5f * size.y - 100.0f));
    top.setFillColor(sf::Color(255.0f, 0.0f, 0.0f));
    top.setOutlineThickness(35);
    top.setOutlineColor(sf::Color::White);

    // create an empty shape
    sf::ConvexShape bottom;
    // resize it to 5 points
    bottom.setPointCount(4);
    // define the points
    bottom.setPoint(0, sf::Vector2f(200.0f, size.y));
    bottom.setPoint(1, sf::Vector2f(size.x, size.y));
    bottom.setPoint(2, sf::Vector2f(size.x, 0.5f * size.y + 100.0f));
    bottom.setPoint(3, sf::Vector2f(0.5f * size.x, 0.5f * size.y + 100.0f));
    bottom.setFillColor(sf::Color(0.0f, 0.0f, 255.0f));
    bottom.setOutlineThickness(35);
    bottom.setOutlineColor(sf::Color::White);

    // -------------------------------------------------------------------
    sf::ConvexShape star;
    int nbPoints = 10;
    float starSizeMax = 20;
    float starSizeMin = 10;

    star.setPointCount(nbPoints);
    for (int idxPoint = 0; idxPoint < nbPoints; idxPoint++) {
        float angle = 2.0F * M_PI * (static_cast<float>(idxPoint) / static_cast<float>(nbPoints));
        float size = idxPoint % 2 ? starSizeMax : starSizeMin;
        float x = size * sinf(angle);
        float y = size * cosf(angle);
        star.setPoint(idxPoint, sf::Vector2f(x,y));
    }
    star.setFillColor(sf::Color(25, 150, 89));
    star.setPosition(0.5f * size.x, 0.5f * size.y);

    while (window.isOpen())
    {
        
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;

        while (window.pollEvent(event))
        {

            switch (event.type)
            {

                // évènement "fermeture demandée" : on ferme la fenêtre
            case sf::Event::Closed:
                window.close();
                break;

            default:
                break;
            }

        }

        // Graphical Region
        window.clear(sf::Color(100, 255, 100));

        window.draw(top);
        window.draw(top);

        window.draw(bottom);

        float step = 50.0f;
        for (int x = 0; x < 5; x++)
        {
            for (int y = 0; y < 8; y++) {
                star.setPosition(sf::Vector2f(static_cast<float>(x) * step, static_cast<float>(y) * step));
                window.draw(star);
            }
        }

        // Window Display
        window.display();

    }



}
