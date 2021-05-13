#include <iostream>
#include <string>
using namespace std;

class Fahrzeug
{
public:
    Fahrzeug(string model, int modelJahr);
    void toString();

private:
    string model;
    int modelJahr;
};

