#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

bool even(int i)
{
    if (i % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    list <int> lista;
    list <int>::iterator it;
    int number;

    do
    {
        cout << "Input number:" << endl;
        cin >> number;
        lista.push_front(number);
    }
    while (number != 0);

    int even2 = count_if(lista.begin(), lista.end(), even);

    cout << "The list contains " << even2 << " even numbers" << endl;

    return 0;
}
