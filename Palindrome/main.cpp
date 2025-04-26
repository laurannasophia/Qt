#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string word;

    cout << "Input word:" << endl;
    cin >> word;

    string turn = word;

    reverse(turn.begin(), turn.end());

    if (word == turn)
        cout << "The word you entered is a palindrome" << endl;
    else
        cout << "The word you entered is not a palindrome" << endl;

    return 0;

}
