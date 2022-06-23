#include <iostream>
#include <string>

using namespace std;

int main()
{
    string action;
    bool run = true;
    while (run == true) {
        cout << "shell > ";
        cin >> action;
        if (action == "help" || action == "Help") {
            cout << "Here is a list of commands: \n";
            cout << "help - displays a list of useful commands.\n";
            cout << "echo - displays the text that was c gosen by the user.\n";

        }
        else if (action == "echo" || action == "Echo") {
            string echo_c;
            cout << "What to display? ";
            cin.ignore();
            getline(cin, echo_c);
            cout << echo_c << "\n";
        }
    }
}
