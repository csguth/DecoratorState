/*
 * BomberManStateDecorator.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "BomberManStateDecorator.h"

BomberManStateDecorator::BomberManStateDecorator(BomberManState* decorated) :
		m_decorated(decorated) {
}

BomberManStateDecorator::~BomberManStateDecorator() {
}

BomberManState* BomberManStateDecorator::update(Bomberman& bomberman) {
	m_decorated = m_decorated->update(bomberman);
	return this;
}

BomberManState* BomberManStateDecorator::handleInput(Bomberman& bomberman,
		const Input & input) {
	m_decorated = m_decorated->handleInput(bomberman, input);
	return this;
}
