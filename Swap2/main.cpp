#include <iostream>

using namespace std;

void swap(int*, int*);

int main()
{
    int c = 2;
    int d = 7;
    cout << "C = " << c << " D = " << d << endl;
    swap(c,d);
    cout << "C = " << c << " D = " << d << endl;
}

void swap(int* a, int* b)
{
    int vaihto = *a;
    *a = *b;
    *b = vaihto;
    return;
}


