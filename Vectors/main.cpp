#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string sana ("heippa");
    string sana2 ("moikka");

    vector<int> v1 (5, 10);
    vector<int> v2 (3, 5);

    cout << "Ensimmainen sana ennen vaihtoa on " << sana << " ja toinen sana ennen vaihtoa on " << sana2 << endl;

    sana.swap (sana2);

    cout << "Ensimmainen sana vaihdon jalkeen on " << sana << " ja toinen sana vaihdon jalkeen on " << sana2 << endl;

    cout << "Ensimmainen vektori ennen vaihtoa on";

    for (vector<int>::iterator it = v1.begin(); it!=v1.end(); it++)
        cout << " " << *it;

    cout << " ja toinen vektori ennen vaihtoa on";

    for (vector<int>::iterator it = v2.begin(); it!=v2.end(); it++)
        cout << " " << *it;

    cout << "\n";

    v1.swap (v2);

    cout << "Ensimmainen vektori vaihdon jalkeen on";

    for (vector<int>::iterator it = v1.begin(); it!=v1.end(); it++)
        cout << " " << *it;

    cout << " ja toinen vektori vaihdon jalkeen on ";

    for (vector<int>::iterator it = v2.begin(); it!=v2.end(); it++)
        cout << " " << *it;

    cout << "\n";

    return 0;

}
