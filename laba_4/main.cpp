#include <iostream>

using namespace std;

class Human {
public:
    virtual void reaction() = 0;
};

class Girls : public Human {
public:
    void reaction() override {
        cout << "Hello, girl!" << endl;
    }
};

class Mans : public Human {
public:
    void reaction() override {
        cout << "Hello, mans!" << endl;
    }
};

void react(Human* human) {
    human->reaction();
}

int main()
{
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
