/*
 * Walking.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Walking.h"
#include "Standing.h"
#include "Bomberman.h"
#include <iostream>
#include <cmath>
BomberManState* Walking::update(Bomberman & bomberman) {
	std::cout << "Walking::update (" << bomberman.body().velocityX() << ", "
			<< bomberman.body().velocityY() << ")" << std::endl;
	BomberManState* nextState = this;
	static const double PRECISION = 0.0000001;
	if (std::abs(bomberman.body().velocityX()) < PRECISION
			&& std::abs(bomberman.body().velocityY()) < PRECISION) {
		nextState = new Standing();
		delete this;
	}
	return nextState;
}
