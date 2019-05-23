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


	int tab[3];
	tab[0] = 1;
	tab[1] = 3;
	tab[2] = 4;
	Wilderness teren(100, 435, 300, tab, 3, sf::Color::Blue);

	bool isSelected = false;
	bool wasChange = false;
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
		
		/*
		sf::Vector2i position;
		position = sf::Mouse::getPosition(window);
		while (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
			if ((sf::Mouse::isButtonPressed(sf::Mouse::Left)) &&
				(position.x >= 100 && position.x <= 150) &&
				(position.y >= 435 && position.y <= 465)) {
				if (!isSelected) {
					teren.select(3);
				}
				else {
					teren.deselect();
				}
				wasChange = true;
			}
		}
		if (wasChange) {
			isSelected = !isSelected;
			wasChange = false;
		}
		*/

		gameController.play(window);
		gameController.draw(window);

		//window.draw(teren.getRect());
		window.display();
	
	}

	return 0;
}