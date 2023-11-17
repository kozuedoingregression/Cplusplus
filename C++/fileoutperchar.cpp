#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

int main()
{
    int i = 0;
    fstream fio;

    string line;

    fio.open("test.txt");

    getline(fio, line);
    int len =line.size();
    for(i=0;i<len;i++)
    {
        cout << line[i] << endl;
    }

    fio.close();
}