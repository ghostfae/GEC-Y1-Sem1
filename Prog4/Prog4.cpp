#include <iostream> 
using namespace std;

int main()
{
    typedef int health;
    enum Weapons
    {
        SWORD = 1,
        DAGGER,
        MACE,
        TWIN_SWORDS,
        SAMURAI,
        WIZARD_STAFF,
        FIRE_POTION,
        ICE_BLADE,
        SMALL_KNIFE
    };
    health CurrentHealth = 13000;
    Weapons CurrentWeapon = SAMURAI;

    cout << "My current health is " << CurrentHealth << endl;
    cout << "The ID of my weapon of choice is " << CurrentWeapon << endl;
}