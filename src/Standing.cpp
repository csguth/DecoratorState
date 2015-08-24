/*
 * Standing.cpp
 *
 *  Created on: 23 de ago de 2015
 *      Author: csguth
 */

#include "Standing.h"
#include <SFML/Graphics.hpp>
#include "Walking.h"

#include <iostream>

Standing::Standing(float x) :
		m_x(x) {
}

Standing::~Standing() {
}

BomberManState* Standing::update() {
	std::cout << "Standing::update" << std::endl;
	std::cout << "   Press A to Walk" << std::endl;
	BomberManState* next = this;
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		next = new Walking(m_x, m_x+10.f);
		delete this;
	}
	return next;
}
