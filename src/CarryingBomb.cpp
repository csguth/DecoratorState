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

void CarryingBomb::releaseBomb() {
	std::cout << "CarryingBomb::releaseBomb" << std::endl;
}

BomberManState* CarryingBomb::handleInput(Bomberman& bomberman, const Input & input) {
	BomberManStateDecorator::handleInput(bomberman, input);
	std::cout << "CarryingBomb::handleInput" << std::endl;
		std::cout << "  press BOMB to release a bomb" << std::endl;
	BomberManState* nextState = this;
	if(input.bomb())
	{
		releaseBomb();
		nextState = m_decorated;
		delete this;
	}
	return nextState;
}
