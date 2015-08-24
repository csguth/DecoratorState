/*
 * Walking.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef WALKING_H_
#define WALKING_H_

#include "BomberManState.h"

class Walking: public BomberManState {
	virtual BomberManState * update(Bomberman & bomberman);
};

#endif /* WALKING_H_ */
