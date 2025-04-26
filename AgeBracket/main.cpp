#include <iostream>

using namespace std;

int main()
{
    string first, last;
    int age;
    cout << "Give your first and last names and age" << endl;
    cin >> first >> last >> age;

    cout << "You are " << first << " " << last << " " << "and you are " << age << " years old." << endl;

    if (age < 18)
        cout << "You're underage." << endl;
    else if (age > 68)
        cout << "You're a pensioner." << endl;
    else
        cout << "You're of working age." << endl;

    return 0;
}
