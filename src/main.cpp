#include <iostream>
#include <string>

void konsolenAusgabe()
{
    std::cout << "Hallo Welt\n";
}

void rechner()
{
    int x, y;
    std::cout << "Hallo Wilkommen im Taschenrechner\n Gib doch bitte zwei Zahlen ein\n";
    std::cin >> x;
    std::cout << "Bitte gib die Zweite Zahl ein\n";
    std::cin >> y;


    std::cout << "Das ergebniss ist " << x + y << " cool oder?";
}

void begruessen(){
    std::cout << "Wie ist dein Name\n";

    std::string name;

    std::cin >> name;

    std::cout << "Hallo " << name << ", schoen dich kennen zu lernen!" << std::endl;

}

int main()
{
    // konsolenAusgabe();
    // rechner();
    begruessen();
    return 0;
}