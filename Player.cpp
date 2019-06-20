#include "Player.h"

Player::Player() {
	playerSpeed = 400;
	
	playerTexture.loadFromFile("C:\\Users\\Nishu\\Desktop\\mario.jpg");
	playerSprite.setTexture(playerTexture);

	//This is for starting position
	playerPosition.x = 500;
	playerPosition.y = 800;
}

sf::Sprite Player::getSprite()
{
	return playerSprite;
}

void Player::moveLeft()
{
	playerMoveLeft = true;
}

void Player::moveRight()
{
	playerMoveRight = true;
}

void Player::stopLeft()
{
	playerMoveLeft = false;
}

void Player::stopRight()
{
	playerMoveRight = false;
}

void Player::update(float elapsedTime)
{
		if (playerMoveRight)
		{
			playerPosition.x += playerSpeed * elapsedTime;
		}

		if (playerMoveLeft)
		{
			playerPosition.x -= playerSpeed * elapsedTime;
		}


		// Now move the sprite to its new position
		playerSprite.setPosition(playerPosition);
}


