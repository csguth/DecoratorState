/*
 * BomberManStateDecorator.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMANSTATEDECORATOR_H_
#define BOMBERMANSTATEDECORATOR_H_

#include "BomberManState.h"

class BomberManStateDecorator : public BomberManState {
protected:
	BomberManState * m_decorated;
public:
	BomberManStateDecorator(BomberManState * decorated);
	virtual ~BomberManStateDecorator();
	virtual BomberManState * update();
};

#endif /* BOMBERMANSTATEDECORATOR_H_ */
