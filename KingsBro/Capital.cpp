#include "Capital.h"





Capital::~Capital()
{
}

Capital::Capital(int x, int y, int force, int attackable[], int sizeOfAttackable, sf::Color color) : Terrain(x, y, 400, force, attackable, sizeOfAttackable, color, 20)
{
}
