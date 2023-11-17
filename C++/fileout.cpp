#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream fio;

    string line;

    fio.open("test.txt");

    getline(fio,line);
    cout<<line<<endl;

    fio.close();
}