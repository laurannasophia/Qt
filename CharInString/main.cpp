#include <iostream>

using namespace std;

int chrcount(string, char);

int main()
{
    string str;
    char ch;
    cout << "Input a string" << endl;
    cin >> str;
    cout << "Input the character you are looking for" << endl;
    cin >> ch;

    cout << "The character you are looking for is in the given string " << chrcount(str, ch) << " times." << endl;

    return 0;
}

int chrcount(string s, char b)
{
    int c = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == b)
            c++;
    return c;
}
