﻿#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

enum App {
	WIDTH = 1200,
	HEIGHT = 800
};

void main(void) {
	RenderWindow window(VideoMode(App::WIDTH, App::HEIGHT), "Project");

	RectangleShape player;
	player.setSize(Vector2f(200.f, 200.f));
	player.setPosition((App::WIDTH - player.getSize().x) / 2, (App::HEIGHT - player.getSize().y) / 2);
	player.setFillColor(Color::Magenta);

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}

		if (Keyboard::isKeyPressed(Keyboard::Key::Right))
			player.move(10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Left))
			player.move(-10.f, 0.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Up))
			player.move(0.f, 10.f);
		if (Keyboard::isKeyPressed(Keyboard::Key::Down))
			player.move(0.f, -10.f);

		window.clear(Color::White);
		window.draw(player);
		window.display();

	}
}