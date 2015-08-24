/*
 * SFMLKeyboardInput.h
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#ifndef SFMLKEYBOARDINPUT_H_
#define SFMLKEYBOARDINPUT_H_

#include "Input.h"
#include <SFML/Graphics.hpp>

class SFMLKeyboardInput: public Input {
	sf::Keyboard::Key m_bomb_key;
	sf::Keyboard::Key m_up_key;
	sf::Keyboard::Key m_right_key;
	sf::Keyboard::Key m_down_key;
	sf::Keyboard::Key m_left_key;
public:
	SFMLKeyboardInput(sf::Keyboard::Key bombKey, sf::Keyboard::Key upKey, sf::Keyboard::Key rightKey, sf::Keyboard::Key downKey, sf::Keyboard::Key leftKey);
	virtual ~SFMLKeyboardInput();
	bool bomb() const;
	bool up() const;
	bool right() const;
	bool down() const;
	bool left() const;
};

#endif /* SFMLKEYBOARDINPUT_H_ */
