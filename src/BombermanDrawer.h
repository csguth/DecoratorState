/*
 * BombermanDrawer.h
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#ifndef BOMBERMANDRAWER_H_
#define BOMBERMANDRAWER_H_

#include "Bomberman.h"
#include <SFML/Graphics.hpp>
class BombermanDrawer {
public:
	void draw(Bomberman& b, sf::RenderWindow & window) const;

};

#endif /* BOMBERMANDRAWER_H_ */
