// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int ans;
    string name;


    cout << "Welcome to my simple plus calculator!" << endl;
    cout << "Enter your name: ";
    cin >> name;
    

    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter other number: ";
    cin >> y;
    ans = x + y;
    cout << "Hi " << name << " your answer is : " << ans;

    
    return 0;
}

