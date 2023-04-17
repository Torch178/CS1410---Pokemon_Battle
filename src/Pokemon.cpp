//use quites "" for local files in the include statement
#include "Pokemon.h"
#include <cstdlib>

//Declare class variables
Pokemon::Pokemon()
{
    name = "Pikachu";
    hp = 100;
    strength = 0;
}

Pokemon::Pokemon(string name)
{
    this -> name = name;
    hp = 100;
    strength = 0;
}

int Pokemon :: getHP()
{
    return hp;
}

int Pokemon :: getStrength()
{
    return strength;
}

string Pokemon :: getName()
{
    return name;
}

void Pokemon :: setStrength()
{
    strength =rand() %40 + 1;

}

void Pokemon :: takeDamage(int damage)
{
    hp -= damage;

}


void Pokemon :: battle(Pokemon other)
{
    this-> setStrength();
    other.setStrength();

    if(strength > other.getStrength())
    {
        int damage = strength - other.getStrength();
        other.takeDamage(damage);
    }

    else
    {
        int damage = other.getStrength() - strength;
        this-> takeDamage(damage);
    }

}


ostream& operator << (ostream &out, Pokemon p)
{
    out << setw(10) << p.name << ": " << setw(12);

    for (int i = 0; i < 100; i+= 10)
    {
        if(i <= p.hp)
        {
            out << "@";
        }

        else{
            out << "*";
        }
    }

    return out;
}
