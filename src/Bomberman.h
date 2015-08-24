/*
 * Bomberman.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMAN_H_
#define BOMBERMAN_H_

#include "BomberManState.h"

class Bomberman {
	BomberManState * m_state;
public:
	Bomberman();
	virtual ~Bomberman();
	void update();
};

#endif /* BOMBERMAN_H_ */
