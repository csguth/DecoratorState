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

BomberManState* BomberManStateDecorator::update() {
	m_decorated = m_decorated->update();
	return this;
}
