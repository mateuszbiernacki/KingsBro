#pragma once
#include "Terrain.h"
class Castle :
	public Terrain
{
public:
	Castle(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color);
	~Castle();
};

