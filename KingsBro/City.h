#pragma once
#include "Terrain.h"
class City :
	public Terrain
{
public:
	City(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color);
	~City();
};

