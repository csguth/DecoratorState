/*
 * BomberManState.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMANSTATE_H_
#define BOMBERMANSTATE_H_

#include "Input.h"
#include "Bomberman.h"

class Bomberman;
class BomberManState {
public:
	virtual ~BomberManState() {	}
	virtual BomberManState * update(Bomberman & bomberman) = 0;
	virtual BomberManState * handleInput(Bomberman & bomberman,
			const Input & input) {
		return this;
	}
};

#endif /* BOMBERMANSTATE_H_ */
