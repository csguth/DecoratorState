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
	float m_x;
public:
	Standing(float x);
	virtual ~Standing();
	BomberManState * update();
};

#endif /* STANDING_H_ */
