#include <iostream>
#include <string>
#include <math.h>



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

    std::getline(std::cin, name);

    std::cout << "Hallo " << name << ", schoen dich kennen zu lernen!" << std::endl;

}

void maxMin(){
    std::cout << std::max(5,10) << std::endl;
    std::cout << std::min(5,10) << std::endl;
}

void quadrieren(int pow){
    int x;
    std::cin >> x;
    std::cout << std::pow(x,pow) << std::endl;
}

bool isMe(){
    std::cout << "Gib dein Name ein" << std::endl;
    std::string name;
    std::getline(std::cin,name);
    return  name == "Gabriel Nadolny";
}

void loops(){
    std::string words[] = {"Hallo","Welt","Was geht"};
    std::cout << sizeof(words);
}

void changeThat(int &kek){
    // Hier kann die Referenz angepasst werden und die Orginall Variable geändert werden
    kek = 4;
}

int main()
{
    // konsolenAusgabe();
    // rechner();
    // begruessen();
    // maxMin();
    // quadrieren(3);
    // std::cout << isMe();
    // loops();

    



    return 0;
}