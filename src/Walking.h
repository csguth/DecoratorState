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
	float m_x0;
	float m_xf;
	float m_x;
	float m_velocity;
public:
	Walking(float x0, float xf);
	virtual ~Walking();
	BomberManState* update();
};

#endif /* WALKING_H_ */
