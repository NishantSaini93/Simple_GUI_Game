#include "Player.h"

Player::Player() {
	playerSpeed = 400;
	
	playerTexture.loadFromFile("C:\\Users\\Nishu\\Desktop\\mario.jpg");
	playerSprite.setTexture(playerTexture);

	//This is for starting position
	playerPosition.x = 500;
	playerPosition.y = 100;
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

void Player::moveUp()
{
	playerMoveUp = true;
}

void Player::moveDown()
{
	playerMoveDown = true;
}

void Player::stopUp()
{
	playerMoveUp = false;
}

void Player::stopDown()
{
	playerMoveDown = false;
}


#include<iostream>

void Player::update(float elapsedTime,sf::Image image)
{
	
	int width = sf::VideoMode::getDesktopMode().width;
	int height = sf::VideoMode::getDesktopMode().height;
		if (playerMoveRight)
		{   if(playerPosition.x<width)
			playerPosition.x += playerSpeed * elapsedTime;
			
		}

		if (playerMoveLeft)
		{   if(playerPosition.x>=0)
			playerPosition.x -= playerSpeed * elapsedTime;
			
		}
		if (playerMoveUp) {
			if(playerPosition.y>=0)
			playerPosition.y -= playerSpeed * elapsedTime;
		}
		if (playerMoveDown) {
			
			
				playerPosition.y += playerSpeed * elapsedTime;
			
		}
		playerSprite.setPosition(playerPosition);

		// Now move the sprite to its new position
		
}




