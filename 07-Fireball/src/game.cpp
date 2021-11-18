#include "game.h"

void Game::Init() {

    window.create(sf::VideoMode(800, 600), "Fireball : The Game");

    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);


    launcher.Init();

}

unsigned int Game::Loop() {


    while (window.isOpen())
    {

        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;

        sf::Vector2f mousePosition;
        sf::Vector2f direction;

        while (window.pollEvent(event))
        {
            sf::Vector2f startPosition;

            switch (event.type)
            {

                // évènement "fermeture demandée" : on ferme la fenêtre
            case sf::Event::Closed:
                window.close();
                break;

            case sf::Event::MouseButtonPressed:
                mousePosition.x = event.mouseMove.x;
                mousePosition.y = event.mouseMove.y;
                break;


            case sf::Event::MouseButtonReleased:
                startPosition.x = window.getSize().x * 0.5f;
                startPosition.y = window.getSize().y * 0.5f;

                // Calculating size --
                direction.x = event.mouseMove.x - mousePosition.x;
                direction.y = event.mouseMove.y - mousePosition.y;

                launcher.LaunchABall(startPosition, direction);
                break;

            default:
                break;
            }

        }

        launcher.UpdateBalls();

        // Graphical Region
        window.clear(sf::Color::Black);

        window.draw(launcher);

        // Window Display
        window.display();

    }

    return EXIT_SUCCESS;


}