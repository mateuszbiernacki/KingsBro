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

	};
private:
	Terrain map[29];
	Player p1;
	Player p2;
	int from = -1;
	int to = -1;
	sf::Color tour = sf::Color::Blue;
	int army = 1000;//armia z suwaka
	int tourCount = 2;
	bool gameOver = false;
public:
	GameController();
	~GameController();

	void draw(sf::RenderWindow &window);
	void play(sf::RenderWindow &window);
	int select(sf::RenderWindow &window);
	void clear(); 
	void attack(sf::Color attackColor);
	void move();
	bool getIsGameOver();
	void reset();
};

