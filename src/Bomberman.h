/*
 * Bomberman.h
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMAN_H_
#define BOMBERMAN_H_

#include "Input.h"
#include "BomberManState.h"

class BomberManState;
class Body {
	double m_velocity_x;
	double m_velocity_y;
	double m_position_x;
	double m_position_y;
public:
	Body(double x, double y) :
			m_velocity_x(0.0), m_velocity_y(0.0), m_position_x(x), m_position_y(
					y) {

	}
	virtual ~Body() {
	}
	void velocityX(double x) {
		m_velocity_x = x;
	}
	void velocityY(double y) {
		m_velocity_y = y;
	}
	double velocityX() const {
		return m_velocity_x;
	}
	double velocityY() const {
		return m_velocity_y;
	}
	double x() const {
		return m_position_x;
	}
	double y() const {
		return m_position_y;
	}
	void x(double x) {
		m_position_x = x;
	}
	void y(double y) {
		m_position_y = y;
	}

	void update() {
		m_position_x += m_velocity_x;
		m_position_y += m_velocity_y;
	}

};

class Bomberman {
	BomberManState * m_state;
	Body m_body;
public:
	Bomberman();
	virtual ~Bomberman();
	void update();
	void handleInput(const Input & input);
	Body & body();
};

#endif /* BOMBERMAN_H_ */
