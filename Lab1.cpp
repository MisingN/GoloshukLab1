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
    
    cout << "������ ����� �����:" << endl;
    cin >> a;

    cout << "������ ��" << endl;
    cin >> c;

    cout << "������ ����� �����:" << endl;
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
        cout << "����� ���� ��� ��";
    }
}
