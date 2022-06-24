#include <iostream>
#include <string>

using namespace std;

int money = 0;

bool run = true;

void see() {
    cout << "Your money is: " << money << "$\n";
}

void add() {
    int money_add;
    cout << "How much money would you like to add?\n";
    cin >> money_add;
    money = money + (int) money_add;
}

void buy() {

    string act;
    cout << "Available products:\n";
    cout << "1) Headphones - 200$\n";
    cout << "2) Gaming PC - 800$\n";
    cout << "3) Water Bottle - 1$\n";

    cin >> act;

    if (act == "1" || act == "1)") {
        cout << "Ok purchasing: Headphones.\n";
        money = money - 200;
    }
    else if (act == "2" || act == "2)") {
        cout << "Ok, purchasing: Gaming PC.\n";
        money = money - 800;
    }
    else if (act == "3" || act == "3)") {
        cout << "Ok, purchasing: Water Bottle.\n";
        money = money - 1;
    }
    else {
        cout << "Undefined action.";
    }
}

int main()
{
    cout << "Welcome!\n";
    while (run == true) {
        string act;
        cout << "1) See my money.\n";
        cout << "2) Add money.\n";
        cout << "3) Buy stuff.\n";
        cout << "4) Quit";

        cin >> act;

        if (act == "1" || act == "1)") {
            see();
        }
        else if (act == "2" || act == "2)") {
            add();
        }
        else if (act == "3" || act == "3)") {
            buy();
        }
        else if (act == "4" || act == "4)") {
            cout << "Closing...";
            run = false;
        }
        else {
            cout << "Undefined action.";
        }
    } 
}

