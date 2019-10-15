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
	Coordinates x = 0;
	Coordinates y = 5;

    sf::RenderWindow window(sf::VideoMode(920, 580), "SFML works!", sf::Style::Default);
    sf::RectangleShape rectangle(sf::Vector2f(920.f, 35.f));
    sf::CircleShape circle(35.f);
    sf::Image image;
    circle.move(50, 50);
    rectangle.setSize(sf::Vector2f(920.f, 35.f));
    sf::RectangleShape rectangle1[11];

    for (int i = 0; i < 11; i++){
        rectangle1[i].setSize(sf::Vector2f(25.f, 25.f));
        rectangle1[i].move(x, y);
        x += 40;
        rectangle1[i].setOutlineThickness(3.f);
        rectangle1[i].setOutlineColor(sf::Color(0, 0, 0));
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(rectangle);
		window.draw(circle);
        for (int i = 0; i < 11; i++){
            window.draw(rectangle1[i]);
        }

        window.display();
    }

    return 0;
}
