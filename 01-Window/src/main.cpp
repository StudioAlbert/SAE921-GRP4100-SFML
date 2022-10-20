// SAE-01.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>


#include "SFML/OpenGL.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML First Window");
    
    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);

	sf::Clock clock;

    while (window.isOpen())
    {

        sf::Time time1 = clock.getElapsedTime();
        sf::Time time2;

        std::cout << "Frame " << time1.asMilliseconds() << ":" << time2.asMilliseconds() << std::endl;

        time1 = clock.restart();


    	// Clear white
        window.clear(sf::Color(255, 255, 255, 255));

		// Clear with a color Const
        sf::Color yellow = sf::Color::White;
        window.clear(yellow);

        // Clear with a custom color
        sf::Color myColor(100, 60, 75, 100);
        window.clear(myColor);

        
        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;
        while (window.pollEvent(event))
        {

            // évènement "fermeture demandée" : on ferme la fenêtre
            if (event.type == sf::Event::Closed)
                window.close();

        }

        // effacement les tampons de couleur/profondeur
        window.display();

    }

    return EXIT_SUCCESS;
}
