// Test1Program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Katlyn Winkelhake
/*
Create a Calculator Program that allows the user to choose 1 of 5 arithmetic operations:

1. Add

2. Subtract

3. Multiplication

4. Division

5. Power

*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    double addNum1;
    double addNum2;
    double addTotal;
    double subNum1;
    double subNum2;
    double subTotal;
    double mulNum1;
    double mulNum2;
    double mulTotal;
    double divNum1;
    double divNum2;
    double divTotal;
    double powNum1;
    double powNum2;
    double powTotal;




    int choice;
    while (true)
    {
        cout << "[1] Add" << endl
            << "[2] Subtract" << endl
            << "[3] Multiply" << endl
            << "[4] Divide" << endl
            << "[5] Power" << endl
            << "[6] Quit Program" << endl
            << "Please enter the number of your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter number 1:" << endl;
            cin >> addNum1;
            cout << "Enter number 2:" << endl;
            cin >> addNum2;
            addTotal = addNum1 + addNum2;
            cout << "The sum is " << addTotal << endl;
            break;

        case 2: 
            cout << "Enter number 1:" << endl;
            cin >> subNum1;
            cout << "Enter number 2:" << endl;
            cin >> subNum2;
            subTotal = subNum1 - subNum2;
            cout << "The total is " << subTotal << endl;
            break;

        case 3: 
            cout << "Enter number 1:" << endl;
            cin >> mulNum1;
            cout << "Enter number 2:" << endl;
            cin >> mulNum2;
            mulTotal = mulNum1 * mulNum2;
            cout << "The total is " << mulTotal << endl;
            break;

        case 4: 
            cout << "Enter number 1:" << endl;
            cin >> divNum1;
            cout << "Enter number 2:" << endl;
            cin >> divNum2;
            divTotal = divNum1 / divNum2;
            cout << "The total is " << divTotal << endl;
            break;
        
        case 5:
            cout << "Enter number 1:" << endl;
            cin >> powNum1;
            cout << "Enter number 2:" << endl;
            cin >> powNum2;
            powTotal = pow(powNum1, powNum2);
            cout << "The total is " << powTotal << endl;
            break;
        
        case 6:
            cout << "Bye!";
            break;

        default:
                cout << "Please make a valid choice";


        }




    }




}

