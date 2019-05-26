#include "Wilderness.h"



Wilderness::Wilderness(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color) : Terrain(x, y, 25, force, attackable, sizeOfAttackable, color, 1)
{
}


Wilderness::~Wilderness()
{
}
