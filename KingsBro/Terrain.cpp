#include "Terrain.h"





Terrain::Terrain(int x, int y, int populace, int force, int attackable[], int sizeOfAttackable, sf::Color color, int POD)
{
	this->populace = populace;
	this->force = force;
	for (int i = 0; i < 29; i++) {
		this->attackable[i] = false;
	}

	this->setAtackable(attackable, sizeOfAttackable);
	this->rect.setOutlineColor(color);
	this->rect.setFillColor(sf::Color::Transparent);
	this->rect.setSize(sf::Vector2f(50, 20));
	this->rect.setOutlineThickness(1);
	this->rect.setPosition(x, y);


	this->POD = POD;

	this->rect.setPosition(x, y);
	this->rect.setSize(sf::Vector2f(50, 20));

}

Terrain::Terrain()
{
}

Terrain::~Terrain()
{
}

void Terrain::setAtackable(int attackable[], int sizeOfAttackable)
{
	for (int i = 0; i < sizeOfAttackable; i++) {
		int a = attackable[i];
		this->attackable[a] = true;
	}
}

void Terrain::select(float f)
{
	this->rect.setOutlineThickness(f);
}

void Terrain::deselect()
{
	this->rect.setOutlineThickness(1);
}

sf::RectangleShape Terrain::getRect()
{
	return this->rect;
}

int Terrain::getPolulace()
{
	return this->populace;
}

void Terrain::setForce(int force)
{
	this->force = force;
}

int Terrain::getForce()
{
	return this->force;
}

bool * Terrain::getAttackable()
{
	return this->attackable;
}

int Terrain::getPOD()
{
	return this->POD;
}

void Terrain::setColor(sf::Color c)
{
	this->rect.setOutlineColor(c);
}

