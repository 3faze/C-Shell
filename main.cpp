#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    string action;
    bool run = true;

    cout << "Welcome to  the C-Shell!\n";
    while (run == true) {
        cout << "shell > ";
        cin >> action;
        if (action == "help" || action == "Help") {
            cout << "Here is a list of commands: \n";
            cout << "help - displays a list of useful commands.\n";
            cout << "echo - displays the text that was chosen by the user.\n";
            cout << "quit - closes the shell app and terminates it's process.\n";

        }
        else if (action == "echo" || action == "Echo") {
            string echo_c;
            cout << "What to display? ";
            cin.ignore();
            getline(cin, echo_c);
            cout << echo_c << "\n";
        }
        else if (action == "quit" || action == "Quit") {
            cout << "Ok, Closing.\n";
            run = false;
        }
        else {
            cout << "Undefined action.\n";
        }
    }
}
