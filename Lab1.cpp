// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a;
    int b;
    string c;
    int d;
    
    cout << "¬вед≥ть перше число:" << endl;
    cin >> a;

    cout << "¬вед≥ть д≥ю" << endl;
    cin >> c;

    cout << "¬вед≥ть друге число:" << endl;
    cin >> b;
    
    if (c == "+")
    {
        d = a + b;
        cout << d;
    }
    else if (c == "-")
    {
        d = a - b;
        cout << d;
    }
    else if (c == "*")
    {
        d = a * b;
        cout << d;
    }
    else if (c == "/" && b != 0)
    {
        d = a / b;
        cout << d;
    }
    else {
        cout << "Ќев≥рн≥ данн≥ або д≥€";
    }
}
