#include "Castle.h"





Castle::Castle(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color) : Terrain(x, y, 50, force, attackable, sizeOfAttackable, color, 15)
{
}

Castle::~Castle()
{
}
