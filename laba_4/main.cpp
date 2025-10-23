#include <iostream>
#include "Girl.h"
#include "Human.h"
#include "Man.h"
#include "Menu.h"

using namespace std;

int main() {
  int choice;
  while (true) {
    cout << "1 - Reaction to a man\n2 - Reaction to the girl\n3 - Exit" << endl;
    cin >> choice;
    if (choice == 1) {
      Man man;
      react(&man);
    } else if (choice == 2) {
      Girl girl;
      react(&girl);
    } else if (choice == 3) {
      return 0;
    }
  }
}
