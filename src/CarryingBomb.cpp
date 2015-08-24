/*
 * CarryingBomb.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "CarryingBomb.h"
#include <SFML/Graphics.hpp>
#include <iostream>

CarryingBomb::CarryingBomb(BomberManState* bomberman) :
		BomberManStateDecorator(bomberman) {
}

CarryingBomb::~CarryingBomb() {
}

void CarryingBomb::releaseBomb() {
	std::cout << "CarryingBomb::releaseBomb" << std::endl;
}

BomberManState* CarryingBomb::update() {
	std::cout << "CarryingBomb::update" << std::endl;
	std::cout << "   Press Space to Relase the Bomb" << std::endl;
	BomberManStateDecorator::update();

	BomberManState* next = this;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
	{
		releaseBomb();
		next = m_decorated;
		delete this;
	}
	return next;
}
