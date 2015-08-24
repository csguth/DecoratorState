/*
 * Standing.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef STANDING_H_
#define STANDING_H_

#include "BomberManState.h"

class Standing: public BomberManState {
public:
	virtual BomberManState * update(Bomberman & bomberman);
};

#endif /* STANDING_H_ */
