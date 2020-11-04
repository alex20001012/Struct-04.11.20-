#define _CRT_SECURE_NO_WARNINGS 
#define gg "\n\n"
#include <iostream>
#include "Cat.h"
#include "Man.h"
using namespace std;

void ShowCat(Cat*c) {
    cout << "Birthday: " << c->Birthday << endl;
    cout << "Nickname: "<<c->Nickname << endl;
    cout << "Name of hozyain: " << c->hoziain->name << endl;
    cout << "Weight: "<<c->Weight<< " g"<< endl;
}
void Inicialization(Cat*c) {
    cout << "Input nickname of your cat: ";
    cin >> c->Nickname;
    cout << gg <<"Input weight of your cat: ";
    cin >> c->Weight;
    cout << gg;
}
int main()
{
    Cat c;
    c.Birthday = 20201104;
    strcpy(c.Nickname, "Barsik");
    c.Weight = 3400;
    Cat c2;
    c2.Birthday = 20201104;
    strcpy(c2.Nickname, "Sobaka");
    c2.Weight = 3600;

    Cat* cc = new Cat[2];
    cc[0] = c;
    cc[1] = c2;

    Man* DANYA = new Man;
    DANYA->id = 1234567890;
    DANYA->kitty = cc;
    DANYA->KittyCount = 2;
    strcpy(DANYA->name, "DANYA");

    c.hoziain = DANYA;
    c2.hoziain = DANYA;
    cout << "First cat" << gg;
    ShowCat(&c);
    cout << "Second cat" << gg;
    ShowCat(&c2);
    cout << gg;
    cout << "Inicialization of first cat" << gg;
    Inicialization(&c);
    cout << "First cat" << gg;
    ShowCat(&c);
}