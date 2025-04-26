#include <iostream>

using namespace std;

bool compare(int, int);

int main()
{
    int x, y;

    cout << "Input two integers:" << endl;
    cin >> x >> y;

    if (compare(x, y))
        cout << "The integers match." << endl;
    else
        cout << "The integers don't match." << endl;

}

bool compare(int a, int b)
{

    if (a == b) {
        return true;
    }
    else
        return false;
}
