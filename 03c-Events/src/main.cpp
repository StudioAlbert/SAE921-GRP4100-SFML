// SAE921-GPR4100-SFML-03c-Events.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

#include "SFML/Main.hpp"
#include "SFML/Graphics.hpp"


int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML First Window");
    
    // Basic Setup of the window
    // Vertical sync, framerate
    window.setVerticalSyncEnabled(true);
    window.setFramerateLimit(30);

    // Setting up thh events
    window.setKeyRepeatEnabled(false);

    // Loading a file as texture
    sf::Texture up;
    sf::Texture down;
    sf::Texture left;
    sf::Texture right;
    up.loadFromFile("data/sprites/ZeldaUp.png");
    down.loadFromFile("data/sprites/ZeldaDown.png");
    left.loadFromFile("data/sprites/ZeldaLeft.png");
    right.loadFromFile("data/sprites/ZeldaRight.png");

    // Using a sprite
    // https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1Sprite.php
    sf::Sprite sprite;
    sprite.setTexture(up);
    sprite.setOrigin(up.getSize().x / 2.0f, up.getSize().y / 2.0f);
    const auto center = window.getSize();
    sprite.setPosition(center.x / 2.0f, center.y / 2.0f);
    //sprite.setScale(0.33f, 0.33f);

    sf::Color backgroundColor(sf::Color::Black);

    while (window.isOpen())
    {
        window.clear(backgroundColor);

        // on inspecte tous les évènements de la fenêtre qui ont été émis depuis la précédente itération
        sf::Event event;

        while (window.pollEvent(event))
        {
            
            sf::Vector2f position;
            float speed = 8.0f;

            switch (event.type)
            {
            
                // évènement "fermeture demandée" : on ferme la fenêtre
            case sf::Event::Closed:
                window.close();
                break; 

            case sf::Event::KeyPressed:

                // Test de la valeur de la touche
                std::cout << "Key pressed : " << event.key.code << std::endl;
                switch (event.key.code)
                {
                case sf::Keyboard::Up:
                    std::cout << "UP ^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;

                    // Change texture
                    sprite.setTexture(up);
                    // Move the sprite
                    position = sprite.getPosition();
                    position.y -= speed;
                    sprite.setPosition(position);
                    break;

                case sf::Keyboard::Down:
                    std::cout << "DOWN vvvvvvvvvvvvvvvvvvvvvvvvvvv" << std::endl;

                    // Change texture
                    sprite.setTexture(down);
                    // Move the sprite
                    position = sprite.getPosition();
                    position.y += speed;
                    sprite.setPosition(position);
                    break;

                case sf::Keyboard::Left:
                    std::cout << "LEFT <<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;

                    // Change texture
                    sprite.setTexture(left);
                    // Move the sprite
                    position = sprite.getPosition();
                    position.x -= speed;
                    sprite.setPosition(position);
                    break;

                case sf::Keyboard::Right:
                    std::cout << "RIGHT >>>>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;

                    // Change texture
                    sprite.setTexture(right);
                    // Move the sprite
                    position = sprite.getPosition();
                    position.x += speed;
                    sprite.setPosition(position);
                    break;

                default:
                    break;
                }
                break;
            
            default:
                break;
            }
            

        }

        window.draw(sprite);

        // Window Display
        window.display();

    }

}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
