#include <iostream>

using namespace std;

bool prime(int);

int main()
{
    int x = 0;
    cout << "Input an integer between 2-99:" << endl;
    cin >> x;

    if (prime(x))
        cout << "The integer is a prime number." << endl;
    else
        cout << "The integer is not a prime number." << endl;
}

bool prime(int n)
{
    if (n <= 1) return false;

    for (int i=2; i<n; i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}
