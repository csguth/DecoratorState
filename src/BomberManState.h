/*
 * BomberManState.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMANSTATE_H_
#define BOMBERMANSTATE_H_

class BomberManState {
public:
	virtual ~BomberManState() {}
	virtual BomberManState * update() = 0;
};

#endif /* BOMBERMANSTATE_H_ */
