//============================================================================
// Name        : SFML.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SFML/Graphics.hpp>

typedef float Coordinates;

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(920, 580), "SFML works!", sf::Style::Default);

    // Sprite customization
    sf::Sprite sprite;
    sf::Texture texture;

    texture.create(200, 200);
    texture.loadFromFile("image.png");

    sprite.setTexture(texture);
    sprite.setColor(sf::Color(200, 20, 30));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        window.draw(sprite);
        window.display();
    }

    return 0;
}
