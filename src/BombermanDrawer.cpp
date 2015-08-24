/*
 * BombermanDrawer.cpp
 *
 *  Created on: 24 de ago de 2015
 *      Author: csguth
 */

#include "BombermanDrawer.h"


void BombermanDrawer::draw(Bomberman& b, sf::RenderWindow& window) const {
	sf::CircleShape shape;
	shape.setRadius(32.f);
	shape.setPosition(sf::Vector2f(b.body().x(), b.body().y()));
	shape.setFillColor(sf::Color::Red);
	window.draw(shape);
}
