/*
 * Input.h
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#ifndef INPUT_H_
#define INPUT_H_

class Input {
public:
	virtual ~Input(){}
	virtual bool bomb() const = 0;
	virtual bool up() const = 0;
	virtual bool right() const = 0;
	virtual bool down() const = 0;
	virtual bool left() const = 0;
};

#endif /* INPUT_H_ */
