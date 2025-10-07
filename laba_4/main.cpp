#include <iostream>
#include "Girls.h"
#include "Human.h"
#include "Mans.h"
#include "Menu.h"

using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "1 - Reaction to a man\n2 - Reaction to the girl\n3 - Exit" << endl;
        cin >> choice;
        if (choice == 1) {
            Mans man;
            react(&man);
        }
        else if (choice == 2) {
            Girls girl;
            react(&girl);
        }
        else if (choice == 3) {
            return 0;
        }
    }
}