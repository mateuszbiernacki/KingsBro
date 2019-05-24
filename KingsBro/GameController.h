#pragma once
#include "Terrains.h"
#include <string>
#include <iostream>
class GameController
{
	class Player {
	public:
		std::string name;
		sf::Color color;
		bool demesne[29];

	};
private:
	Terrain map[29];
	Player p1;
	Player p2;
	int from = -1;
	int to = -1;
public:
	GameController();
	~GameController();

	void draw(sf::RenderWindow &window);
	void play(sf::RenderWindow &window);
	int select(sf::RenderWindow &window);
	void clear(sf::RenderWindow &window); 
};

