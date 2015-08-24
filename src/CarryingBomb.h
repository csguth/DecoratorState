/*
 * CarryingBomb.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef CARRYINGBOMB_H_
#define CARRYINGBOMB_H_

#include "BomberManStateDecorator.h"

class CarryingBomb : public BomberManStateDecorator {
	void releaseBomb();
public:
	CarryingBomb(BomberManState * bomberman);
	virtual ~CarryingBomb();
	BomberManState* update();
};

#endif /* CARRYINGBOMB_H_ */
