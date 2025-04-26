#include <iostream>
using namespace std;

void print_array(int *a,int n)
{
    for (int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}

void print_array(char *a)
{
    while (*a!='\0')
    {
        cout << *a << " " ;
        a++;
    }
    cout << endl;
}


int main()
{
    int A[]={9,0,2,5,0};
    char C[]="Merkkejä";

    print_array(A,5);
    print_array(C);

    return 0;
}
