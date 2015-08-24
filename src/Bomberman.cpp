/*
 * Bomberman.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Bomberman.h"

#include "CarryingBomb.h"
#include "Standing.h"

Bomberman::Bomberman() :
		m_state(new CarryingBomb(new Standing(0.f))) {

}

Bomberman::~Bomberman() {
}

void Bomberman::update() {
	m_state = m_state->update();
}
