/*
 * SFMLKeyboardInput.cpp
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#include "SFMLKeyboardInput.h"

SFMLKeyboardInput::SFMLKeyboardInput(sf::Keyboard::Key bombKey,
		sf::Keyboard::Key upKey, sf::Keyboard::Key rightKey,
		sf::Keyboard::Key downKey, sf::Keyboard::Key leftKey) :
		m_bomb_key(bombKey), m_up_key(upKey), m_right_key(rightKey), m_down_key(
				downKey), m_left_key(leftKey) {
}

SFMLKeyboardInput::~SFMLKeyboardInput() {
}

bool SFMLKeyboardInput::bomb() const {
	return sf::Keyboard::isKeyPressed(m_bomb_key);
}

bool SFMLKeyboardInput::up() const {
	return sf::Keyboard::isKeyPressed(m_up_key);
}

bool SFMLKeyboardInput::right() const {
	return sf::Keyboard::isKeyPressed(m_right_key);
}

bool SFMLKeyboardInput::down() const {
	return sf::Keyboard::isKeyPressed(m_down_key);
}

bool SFMLKeyboardInput::left() const {
	return sf::Keyboard::isKeyPressed(m_left_key);
}
