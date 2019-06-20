#include<SFML/Graphics.hpp>
/**
*Class that implements the player functionality
*/
class Player {
	// 2-dimensional vector for position of player
	sf::Vector2f playerPosition{};
	//it is texture rectangle
	sf::Sprite playerSprite{};
	//Texture for sprite use
	sf::Texture playerTexture{};
	//Variable for movements
	bool playerMoveLeft{};
	bool playerMoveRight{};

	//For speed
	float playerSpeed{};
public:
	/**
	*player constructor 
	*/
	Player();
	
	/**
	*Function to get Sprite
	*/
	sf::Sprite getSprite();
	
	/**
	*Function to move left
	*/
	void moveLeft();
	
	/**
	*Function to move right
	*/
	void moveRight();
	
	/**
	*Function to stop left
	*/
	void stopLeft();
	
	/**
	*Function to stop right
	*/
	void stopRight();

	/**
	*Update frame with movement
	*/
	void update(float elapsedTime);
};
