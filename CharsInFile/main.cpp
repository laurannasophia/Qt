#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char text;
    int lkm = 0;
    fstream file;
    file.open("textfile.txt");
    while ((text=cin.get())!=EOF)
    {
        file << text;
        lkm++;
    }

    file.close();

    cout << "The file has " << lkm << " characters." << endl;

    return 0;
}
