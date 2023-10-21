//MAVI - Unidad 3 - Ejercicio 7
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;

Texture texture;
Texture texture_cblue;
Sprite sprite1;
Sprite sprite2;
Sprite sprite3;
Sprite sprite4;
Sprite sprite5_cblue;

int main() {

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper^4 Blue Point");

	texture.loadFromFile("Unidad3_Assets/rcircle.png");
	texture_cblue.loadFromFile("Unidad3_Assets/bcircle.png");
	sprite1.setTexture(texture);
	sprite2.setTexture(texture);
	sprite3.setTexture(texture);
	sprite4.setTexture(texture);
	sprite5_cblue.setTexture(texture_cblue);

	float size_x = (float)texture.getSize().x;
	float size_y = (float)texture.getSize().y;

	//Setear posiciones en 4 extremos de la pantalla
	sprite1.setPosition(0, 0);
	sprite2.setPosition(800 - size_x, 0);
	sprite3.setPosition(0, 600 - size_y);
	sprite4.setPosition(800 - size_x, 600 - size_y);
	//Posición del sprite -circulo azul- en centro de pantalla
	sprite5_cblue.setPosition((800-size_x) / 2 , (600-size_y) / 2);

	while (App.isOpen())
	{
		sf::Event event;
		while (App.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				App.close();
		}

		App.clear();

		App.draw(sprite1);
		App.draw(sprite2);
		App.draw(sprite3);
		App.draw(sprite4);
		App.draw(sprite5_cblue);

		App.display();
	}
	return 0;
}
