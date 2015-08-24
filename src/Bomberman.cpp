/*
 * Bomberman.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Bomberman.h"
#include "CarryingBomb.h"
#include "Standing.h"
#include "CanWalk.h"

Bomberman::Bomberman() :
		m_state(new CarryingBomb(new CanWalk(new Standing))), m_body(0.0, 0.0) {

}

Bomberman::~Bomberman() {
}

void Bomberman::update() {
	m_body.update();
	m_state = m_state->update(*this);
}

Body& Bomberman::body() {
	return m_body;
}

void Bomberman::handleInput(const Input& input) {
	m_state = m_state->handleInput(*this, input);
}
