#include "Engine.h"

Engine::Engine()
{
	// Get the screen resolution and create an SFML window and View
	sf::Vector2f resolution;
	resolution.x = sf::VideoMode::getDesktopMode().width;
	resolution.y = sf::VideoMode::getDesktopMode().height;

	renderWindow.create(sf::VideoMode(resolution.x, resolution.y),"Simple Game Engine",sf::Style::Fullscreen);

	// Load the background into the texture
	// Be sure to scale this image to your screen size
	gameBackgroundTexture.loadFromFile("C:\\Users\\Nishu\\Desktop\\back.jpg");

	// Associate the sprite with the texture
	gameBackgroundSprite.setTexture(gameBackgroundTexture);

}

void Engine::start()
{
	// Timing
	sf::Clock clock;

	while (renderWindow.isOpen())
	{
		// Restart the clock and save the elapsed time into dt
		sf::Time dt = clock.restart();

		// Make a fraction from the delta time
		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();
	}
}


void Engine::input()
{
	// Handle the player quitting
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		renderWindow.close();
	}

	// Handle the player moving
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		player.moveLeft();
	}
	else
	{
		player.stopLeft();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		player.moveRight();
	}
	else
	{
		player.stopRight();
	}

}

void Engine::update(float dtAsSeconds)
{
	player.update(dtAsSeconds);
}

void Engine::draw()
{
	// Rub out the last frame
	renderWindow.clear(sf::Color::White);

	// Draw the background
	renderWindow.draw(gameBackgroundSprite);
	renderWindow.draw(player.getSprite());

	// Show everything we have just drawn
	renderWindow.display();
}