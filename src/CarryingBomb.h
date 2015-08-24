/*
 * CarryingBomb.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef CARRYINGBOMB_H_
#define CARRYINGBOMB_H_

#include "BomberManStateDecorator.h"

class CarryingBomb: public BomberManStateDecorator {
	void releaseBomb();
public:
	CarryingBomb(BomberManState * bomberman);
	BomberManState * handleInput(Bomberman & bomberman, const Input & input);
};

#endif /* CARRYINGBOMB_H_ */
