#include "./Tier.h"
#include <string>
#ifndef HUND_H
#define HUND_H

using namespace std;
class Hund : public Tier
{
public:
    Hund(string name);
    void sprechen();
};


#endif