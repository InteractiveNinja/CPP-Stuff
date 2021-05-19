#include <string>
#include <iostream>
#include "../headers/Hund.h"

Hund::Hund(string name) : Tier(name)
{

}

void Hund::sprechen() {
    cout << name << " sagt Wau Wau" << endl;
}
