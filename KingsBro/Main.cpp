#include <SFML/Graphics.hpp>
#include <iostream>
#include "Terrains.h"
#include "GameController.h"


int main()
{
	GameController gameController;

	sf::RenderWindow window(sf::VideoMode(1600, 800), "KingsBro", sf::Style::Close);
	sf::Texture texture;
	texture.loadFromFile("MAPA.png");

	sf::Sprite sprite(texture);
	sprite.setTextureRect(sf::IntRect(0,0,1600,800)); 



	while (window.isOpen())
	{
		window.draw(sprite);

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}

		}
		

		gameController.play(window);
		gameController.draw(window);
		window.display();
	
	}

	return 0;
}