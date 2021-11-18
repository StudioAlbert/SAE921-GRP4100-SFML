

#include <iostream>

#include "game.h"
#include "SFMLUtils_Vector.h"

Game::Game() {
}

void Game::Init() {

    window.create(sf::VideoMode(1200, 720), "The Game");

    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);
        
    m_placeholderTexture.loadFromFile("data/missile/missile_0.png");
    m_placeholder.setTexture(m_placeholderTexture);
    m_placeholder.setOrigin(m_placeholderTexture.getSize().x * 0.5f, m_placeholderTexture.getSize().y * 0.5f);
    m_placeholder.setPosition(window.getSize().x * 0.5f, window.getSize().y * 0.5f);

}

int Game::Loop()
{

    sf::Vector2u wSize = window.getSize();

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

            case sf::Event::MouseMoved:
                if (event.mouseMove.x < 0 || event.mouseMove.x > window.getSize().x
                    || event.mouseMove.y < 0 || event.mouseMove.y > window.getSize().y) 
                {
                    window.setMouseCursorVisible(true);
                }
                else
                {
                    window.setMouseCursorVisible(false);
                }
                // Move Reticle
                reticle.setPosition(event.mouseMove.x, event.mouseMove.y);

                // Rotate rocket preview
                m_placeholder.setRotation(SFMLUtils::RadToDeg(
                    SFMLUtils::alignTo(
                        sf::Vector2f(static_cast<float>(wSize.x) * 0.5f, static_cast<float>(wSize.y) * 0.5f),
                        sf::Vector2f(event.mouseMove.x, event.mouseMove.y)
                    )
                )
                );
                break;

            case sf::Event::MouseButtonReleased:

                missileManager.AddMissile(
                    sf::Vector2f(static_cast<float>(wSize.x) * 0.5f, static_cast<float>(wSize.y) * 0.5f), 
                    sf::Vector2f(event.mouseButton.x, event.mouseButton.y)
                );

                break;

            default:
                break;
            }

        }

        // Graphical Region
        window.clear(sf::Color::Black);

        // Update everything
        missileManager.update();

        // Draw everything -- -- --
        window.draw(m_placeholder);
        window.draw(reticle);
        window.draw(missileManager);

        // Window Display
        window.display();

    }

    return EXIT_SUCCESS;

}
