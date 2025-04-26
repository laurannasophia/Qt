#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
    vector<int> v;
    int numbers;

    cout << "Input ten numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> numbers;
        v.push_back(numbers);
    }

    float average = accumulate(v.begin(), v.end(), 0.0)/v.size();
    cout << "The average of your numbers is " << average << endl;

    return 0;
}
