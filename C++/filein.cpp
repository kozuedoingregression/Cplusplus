#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fio;

    string line,out;

    fio.open("test.txt");

    while(fio)
    {
        getline(cin, line);
        if(line=="-1")
        {
            break;
        }
        fio<<line;
    }
    
    fio.close();
    fio.open("test.txt");

    getline(fio,out);
    cout<<out<<endl;

    fio.close();

    return 0;
}