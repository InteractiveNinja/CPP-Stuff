#include "include/Fahrzeug.h"

using namespace std;



Fahrzeug::Fahrzeug(string model, int modelJahr)
{
    this->model = model;
    this->modelJahr = modelJahr;
}

void Fahrzeug::toString()
{
    cout << this->model << endl << this->modelJahr << endl;
}


