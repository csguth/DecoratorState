/*
 * CanWalk.h
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#ifndef CANWALK_H_
#define CANWALK_H_

#include "BomberManStateDecorator.h"

class CanWalk: public BomberManStateDecorator {
public:
	CanWalk(BomberManState * state);
	virtual BomberManState * handleInput(Bomberman & bomberman, const Input & input);
};

#endif /* CANWALK_H_ */
