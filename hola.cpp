// programa: hola mundo
//autor:Nicolas Jimenez
//fecha:03/08/2020

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!","Nicolas","Jimnez"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
} 