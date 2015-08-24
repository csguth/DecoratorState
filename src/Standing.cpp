/*
 * Standing.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Standing.h"
#include <SFML/Graphics.hpp>
#include "Walking.h"
#include <iostream>
#include "Bomberman.h"
#include <cmath>

BomberManState* Standing::update(Bomberman& bomberman) {
	std::cout << "Standing::update (" << bomberman.body().velocityX() << ", "
			<< bomberman.body().velocityY() << ")" << std::endl;
	BomberManState* nextState = this;
	static const double PRECISION = 0.0000001;
	if (std::abs(bomberman.body().velocityX()) > PRECISION
			|| std::abs(bomberman.body().velocityY()) > PRECISION) {
		nextState = new Walking;
		delete this;
	}
	return nextState;
}
