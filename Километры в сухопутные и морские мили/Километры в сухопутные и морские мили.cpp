// Километры в сухопутные и морские мили.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float kilometers, l_miles, n_miles;

    cout << "This program converts kilometers to land and nautical miles" << endl;

    cout << "Enter how many kilometers: ";
    cin >> kilometers;

    l_miles = kilometers / 1.609;
    n_miles = kilometers / 1.852;

    cout << "In " << kilometers << " kilometers there is " << l_miles << " land miles" << endl;
    cout << "In " << kilometers << " kilometers there is " << n_miles << " nautical miles" << endl;
}
