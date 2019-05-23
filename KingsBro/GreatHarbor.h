#pragma once
#include "Terrain.h"
class GreatHarbor :
	public Terrain
{
public:
	GreatHarbor(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color);
	~GreatHarbor();
};

