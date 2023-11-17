#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fio;

    string line;

    fio.open("test.txt");

    // cin>>line;

    while (fio)
    {
        getline(cin, line);
        if(line=="-1")
        {
            break;
        }
        fio << line;
    }

    fio.close();

    return 0;
}