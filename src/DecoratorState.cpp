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

using namespace std;

int main(void) {

	sf::RenderWindow window(sf::VideoMode(64.5f * 8, 64.5f * 8), "SFML works!");
	Bomberman * bm = new Bomberman;

	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		bm->update();

		window.clear();

		window.display();
	}

	return 0;
}

