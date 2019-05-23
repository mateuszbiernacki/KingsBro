#pragma once
#include "Terrain.h"
class Capital :
	public Terrain
{
public:
	Capital(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color);
	~Capital();
};

