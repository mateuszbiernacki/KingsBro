#include "City.h"






City::City(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color) : Terrain(x, y, 100, force, attackable, sizeOfAttackable, color, 5)
{
}

City::~City()
{
}
