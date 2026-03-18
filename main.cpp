#include <iostream>
#include "Player.h"
#include "Item.h"
#include "Inventory.h"

using namespace std;

// int main() {
//     Player hero;
//     Player wizard("WIZZARD", 120, 15);

//     hero.displayStatus();
//     wizard.displayStatus();

//     hero.takeDamage(25);
//     hero.displayStatus();

//     wizard.takeDamage(150);
//     wizard.displayStatus();

//     return 0;
// }

int main() {
    Player hero;

    Item sword("sword", 50);
    Item bonnet("Bonnet", 150);
    Item boots("Boots", 10);
    Item junk("Junk", 0);

    cout << "\n--- Adding items to " << hero.getName() << "'s inventory ---" << endl;
    hero.addItem(sword);
    hero.addItem(bonnet);
    hero.addItem(boots);
    hero.addItem(junk);

    cout << "\n--- " << hero.getName() << "'s Inventory ---" << endl;

    cout << "Total items added to inventory " << Item::getTotalItems() << endl << endl;

    hero.showInventory();
    cout << endl;
    
    return 0;
}