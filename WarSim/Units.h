#ifndef UNITS_H
#define UNITS_H
#include <iostream>
using namespace std;

class Warrior {
    public:
        float Attack = 1.0;
        float Health = 250.0;
        float Damage = 150.0;

        float currentHealth = Health;
};

class Archer {
    public:

        float Attack = 2.0;
        float Health = 200.0;
        float Damage = 120.0;

        float currentHealth = Health;
};

class Mage {
    public:
        float Attack = 3.0;
        float Health = 180.0;
        float Damage = 160.0;

        float currentHealth = Health;
};

class Rogue {
    public:
        float Attack = 4.0;
        float Health = 170.0;
        float Damage = 140.0;

        float currentHealth = Health;
};
#endif // UNITS_H
