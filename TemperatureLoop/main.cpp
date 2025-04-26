#include <iostream>

using namespace std;

int main()
{
    cout << "Celcius" << endl;
    for (int i = -50; i <= 100; i+=5) {
        cout << i << endl;
    }
    cout << "\n";

    cout << "Fahrenheit" << endl;
    for (int j = -58; j <= 212; j+=9) {
        cout << j << endl;
    }
}
