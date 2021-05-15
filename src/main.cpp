#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void konsolenAusgabe()
{
    cout << "Hallo Welt\n";
}

void rechner()
{
    int x, y;
    cout << "Hallo Wilkommen im Taschenrechner\n Gib doch bitte zwei Zahlen ein\n";
    cin >> x;
    cout << "Bitte gib die Zweite Zahl ein\n";
    cin >> y;

    cout << "Das ergebniss ist " << x + y << " cool oder?";
}

void begruessen()
{
    cout << "Wie ist dein Name\n";

    string name;

    getline(cin, name);

    cout << "Hallo " << name << ", schoen dich kennen zu lernen!" << endl;
}

void maxMin()
{
    cout << max(5, 10) << endl;
    cout << min(5, 10) << endl;
}

void quadrieren(int powVar)
{
    int x;
    cin >> x;
    cout << pow(x, powVar) << endl;
}

bool isMe()
{
    cout << "Gib dein Name ein" << endl;
    string name;
    getline(cin, name);
    return name == "Gabriel Nadolny";
}

void loops()
{
    string words[] = {"Hallo", "Welt", "Was geht"};
    cout << sizeof(words);
}

void changeThat(int &kek)
{
    // Hier kann die Referenz angepasst werden und die Orginall Variable geändert werden
    kek = 4;
}

void guessGame()
{
    /*

    OMG was habe ich hier geschrieben, hoffentlich werde ich es irgendwann besser schreiben könne 
    */
    int max, rnd;
    string input;
    cout << "Gib die max Zahl ein" << endl;

    cin >> max;

    srand(time(0));
    rnd = rand() % max + 1;
    cout << "Errate die Zahl sie ist zwischen 0 und " << max << " Zahl ist " << rnd << endl;

    do
    {

        cin >> input;

        if (input == "stop")
        {
            cout << "Du hast aufgehört Zahlen zu erraten" << endl;
            break;
        }

        if (stoi(input) == rnd)
        {
            cout << "Du hast die Richtige Zahl erraten" << endl;
        }

    } while (stoi(input) != rnd);
}

int main()
{
    // konsolenAusgabe();
    // rechner();
    // begruessen();
    // maxMin();
    // quadrieren(3);
    // cout << isMe();
    // loops();

    // guessGame();

    return 0;
}