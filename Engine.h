#include <SFML/Graphics.hpp>
#include "Player.h"

class Engine {
	// variable redering window
	sf::RenderWindow renderWindow;

	//Sprite for background
	sf::Sprite gameBackgroundSprite;
	//Textture for background
	sf::Texture gameBackgroundTexture;

	// Instance of Player class
	Player player;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	// constructor
	Engine();

	// start 
	void start();
};