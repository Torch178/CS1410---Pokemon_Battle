//Actions/ output of classes will be public
//Properties / characteristics of a class will be private

//Class files will be split up into multiple files
//One file will have all of the nitty gritty coding functions,
//While the header (fileName.h) file will have the prototpye(s) for the class and will set values for class variables
//Helps to split up the data, so you aren't accessing the entire class

//You can't define an object more than once in C++
//#pragma once goes at the top of the class to keep the class from defining an object twice
//Must include at the top of every .h (header) file for your class(es)

//Copy constructor: placed in the header file (fileName.h) of the class
//used to make a copy of an object
//Special constructor which takes the same type of object for a parameter
//in the main code it is referenced with "="
//(EX in header file: ClassName (const ClassName &); or Fraction (const Fraction &);

//Overlodaded operators allow you to turn basic arithmetic or comparison operators into methods which can manipulate
// or modify different objects (EX: adding together two fraction objects from the Fraction class)
// Overloaded operator definition: use the keyword "operator" then the operator you want to use
//    begin statement with const keyword to keep the member variables formthe class objects from being changed themselves
//    (EX: const Fraction operator + (Fraction other);

//friend function allows you to call a function without use of an instanced object
//Can access the private data in a class while still acting as a global function




#include <iostream>
#include <time.h>
#include "Pokemon.h"
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    cout << "Pokemon Battle!" << endl;
    string name;

    cout << "Enter your Pokemon name: ";
    cin >> name;

    Pokemon you(name);
    Pokemon computer;

    string choice;

    do
    {
        cout << you << endl;
        cout << computer << endl;
        cout << "(B)attle or (Q)uit: ";
        cin >> choice;

        you.battle(computer);


    }while(choice != "Q" && choice != "q" && you.getHP() > 0 && computer.getHP() > 0);

    if (you.getHP() > computer.getHP())
        {
            cout << "You Win";
        }
    else
        {
            cout << "You Lose";

        }
    return 0;

}
