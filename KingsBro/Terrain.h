#pragma once
#include <SFML/Graphics.hpp>
class Terrain
{
private:
	sf::RectangleShape rect;
	int populace;
	int force;
	bool attackable[29];
	int POD; //power of deffence
	bool isSelected = false;

public:
	Terrain(int x, int y, int populace, int force, int attackable[], int sizeOfAttackable, sf::Color, int POD);
	Terrain();
	~Terrain();

	void setAtackable(int attackable[], int sizeOfAttackable);
	void select(float f);
	void deselect();
	sf::RectangleShape getRect();
	int getPolulace();
	void setForce(int force);
	int getForce();
	bool* getAttackable();
	int getPOD();
	void setColor(sf::Color c);

};

