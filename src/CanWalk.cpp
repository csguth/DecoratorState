/*
 * CanWalk.cpp
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#include "CanWalk.h"
#include <iostream>

CanWalk::CanWalk(BomberManState * state) :
		BomberManStateDecorator(state) {
}

BomberManState* CanWalk::handleInput(Bomberman& bomberman, const Input& input) {
	BomberManStateDecorator::handleInput(bomberman, input);
	std::cout << "CanWalk::handleInput" << std::endl;
	BomberManState* nextState = this;
	double X = 0.0;
	double Y = 0.0;
	if (input.up())
		Y -= 1.;
	if (input.right())
		X += 1.;
	if (input.down())
		Y += 1.;
	if (input.left())
		X -= 1.;
	bomberman.body().velocityX(X);
	bomberman.body().velocityY(Y);
	return nextState;
}
