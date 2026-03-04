#include <iostream>
#include "Player.h"

    // constructors
    Player::Player() {
        name = "Hero";
        health = 100;
        maxHealth = 100;
        attackPower = 10;
    };
    Player::Player(std::string name, int health, int attackPower) {
        this->name = name;
        this->health = health;
        this->maxHealth = health;
        this->attackPower = attackPower;
    };
    Player::~Player() {
        std::cout << "The object for Player " << name << " has been destroyed" << std::endl;
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