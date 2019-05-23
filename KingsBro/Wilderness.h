#pragma once
#include "Terrain.h"
class Wilderness :
	public Terrain
{
public:
	Wilderness(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color);
	~Wilderness();
};

