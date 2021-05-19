#include <string>
using namespace std;
#ifndef TIER_H // include guard
#define TIER_H
class Tier
{
protected:
    string name;
public:
    Tier(string name);
    void sprechen();
};
#endif


