#include <iostream>

using namespace std;

void swap(int&, int&);

void swap(int*, int*);

int main()
{
    int c = 4;
    int d = 2;

    cout << "C = " << c << " D = " << d << endl;
    swap(c, d);
    cout << "C = " << c << " D = " << d << endl << endl;

    int e = 6;
    int f = 7;
    cout << "E = " << e << " F = " << f << endl;
    swap(e,f);
    cout << "E = " << e << " F = " << f << endl;
}

void swap(int& a, int& b)
{
    int vaihto = a;
    a = b;
    b = vaihto;
    return;
}

void swap(int* a, int* b)
{
    int vaihto = *a;
    *a = *b;
    *b = vaihto;
    return;
}
