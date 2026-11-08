#include <iostream>
#include <string>
#include <thread>
#include <chrono>
using namespace std;

void printWithDelay(string text, int delay_ms) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay_ms));
    }
    cout << endl;
}

void showHearts() {
    cout << "\n";
    cout << "  ******       ******  " << endl;
    cout << "**********   **********" << endl;
    cout << "***********************" << endl;
    cout << " ********************* " << endl;
    cout << "  *******************  " << endl;
    cout << "   *****************   " << endl;
    cout << "    ***************    " << endl;
    cout << "      ***********      " << endl;
    cout << "        *******        " << endl;
    cout << "          ***          " << endl;
    cout << "           *           " << endl;
}

int main() {
    string name = "";

    cout << "=================================\n";
    printWithDelay("  Starting Love Program... ", 50);
    cout << "=================================\n\n";

    for (int i = 1; i <= 5; i++) {
        cout << "Message " << i << ": ";
        printWithDelay("I like you " + name + " ❤️", 80);
        this_thread::sleep_for(chrono::milliseconds(300));
    }

    showHearts();

    cout << "\n";
    printWithDelay(">> From: Your favorite Mechatronics guy", 40);
    printWithDelay(">> To: , my Queen 👑", 40);
    printWithDelay(">> Message: I like you  forever!", 60);

    cout << "\n=================================\n";
    cout << "  Program Ended. Like = Infinite  "<< endl;
    cout << "=================================\n";

    return 0;
}
