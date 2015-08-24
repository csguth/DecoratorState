/*
 * Walking.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Walking.h"
#include "Standing.h"

#include <iostream>

Walking::Walking(float x0, float xf) :
		m_x0(x0), m_xf(xf), m_x(x0), m_velocity(0.1f) {
}

Walking::~Walking() {
}

BomberManState* Walking::update() {
	std::cout << "Walking::update" << std::endl;
	m_x += m_velocity;
	if (m_x >= m_xf)
		return new Standing(m_x);
	return this;
}
