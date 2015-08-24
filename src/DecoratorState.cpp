//============================================================================
// Name        : DecoratorState.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <SFML/Graphics.hpp>
#include "Bomberman.h"
#include "SFMLKeyboardInput.h"
#include "BombermanDrawer.h"

using namespace std;

int main(void) {

	sf::RenderWindow window(sf::VideoMode(64.5f * 8, 64.5f * 8), "SFML works!");
	Bomberman * bm = new Bomberman;
//	Bomberman * bm2 = new Bomberman;
	bm->body().x(0.0);
	bm->body().y(0.0);
//	bm2->body().x(64.0);
//	bm2->body().y(0.0);
	SFMLKeyboardInput keyboard(sf::Keyboard::Space, sf::Keyboard::W, sf::Keyboard::D, sf::Keyboard::S, sf::Keyboard::A);
//	SFMLKeyboardInput keyboard2(sf::Keyboard::BackSpace, sf::Keyboard::Up, sf::Keyboard::Right, sf::Keyboard::Down, sf::Keyboard::Left);
	BombermanDrawer drawer;
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		bm->handleInput(keyboard);
//		bm2->handleInput(keyboard2);
		bm->update();
//		bm2->update();


		window.clear();
		drawer.draw(*bm, window);
//		drawer.draw(*bm2, window);
		window.display();
	}

	return 0;
}

