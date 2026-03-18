#include <iostream>
#include "Inventory.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player {
    private:
        std::string name;
        int health;
        int maxHealth;
        int attackPower;
        Inventory inventory;

    public:
    // constructors 
    Player();
    Player(std::string name, int health, int attackPower);
    ~Player();

    // getters
    std::string getName() const;
    int getHealth() const;
    int getMaxHealth() const;
    int getAttackPower() const;

    // actual functions
    void takeDamage(int damage);
    void displayStatus();

    void showInventory() const;
    void addItem(const Item& item);
};

#endif