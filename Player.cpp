#include <iostream>
#include "Player.h"
// #include "Item.h"
#include "Inventory.h"

    // constructors 
    Player::Player() : 
        name("hero"),
        health(100),
        maxHealth(100),
        attackPower(10),
        inventory(10) {
        
            std::cout << "Default constructor called for Player." << std::endl;
    };
    Player::Player(std::string name, int health, int attackPower) : 
        name(name),
        health(health),
        maxHealth(health),
        attackPower(attackPower),
        inventory(10) {
    };
    Player::~Player() {
        std::cout << "Player " << name << " has been destroyed" << std::endl;
    }

    // getters
    std::string Player::getName() const {
        return name;
    };
    int Player::getHealth() const {
        return health;
    };
    int Player::getMaxHealth() const {
        return maxHealth;
    };
    int Player::getAttackPower() const {
        return attackPower;
    };

    // actual functions
    void Player::takeDamage(int damage) {
        if (damage > health) {
            health = 0;
        }
        else {
            health -= damage;
        }

        if (health <= 0) {
            std::cout << name << " falls to the grond, defeated." << std::endl;
        }
    };
    void Player::displayStatus() {
        std::cout << name << " - HP: " << health << "/" << maxHealth << std::endl;
    };

    void Player::showInventory() const {
        inventory.display();
    };
    void Player::addItem(const Item& item) {
        inventory.addItem(item);
    };