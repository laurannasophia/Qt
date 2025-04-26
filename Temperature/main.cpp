#include <iostream>

using namespace std;

int main()
{
    char type;
    double value;

    cout << "C -> F or F -> C ?" << endl;
    cout << "Give C or F for a start value" << endl;
    cin >> type;

    switch (type) {
    case 'C':
    case 'c':
        cout << "Temperature in Celcius?" << endl;
        cin >> value;
        cout << value * 1.8 + 32 << endl;
        break;

    case 'F':
    case 'f':
        cout << "Temperature in Fahrenheit?" << endl;
        cin >> value;
        cout << (value - 32) / 1.8 << endl;
        break;

    default:
        cout << "Wrong letter";
    }

    return 0;
}
