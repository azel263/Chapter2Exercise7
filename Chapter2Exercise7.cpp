/*
    File name: Chapter2Exercise7.cpp
    Programmer/Developer: Alejandro Andres Pepito
    Date: 2/20/2025
    Requirements summary:
        "Write a program that displays the number of millimeters an ocean's level rises in throughout 5, 7, and 10 years."
*/

#include <iostream>

using namespace std;

int main()
{
    const double levelRate = 1.5;
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    double riseIn5Years = levelRate * years5;
    double riseIn7Years = levelRate * years7;
    double riseIn10Years = levelRate * years10;

    cout << "The ocean's level rises at " << levelRate << " millimeters per year. In 5 years, the ocean will have risen " << riseIn5Years << " in millimeters; " << riseIn7Years << " millimeters in 7 years, and " << riseIn10Years << " millimeters in 10 years." << endl ;

    return 0;
}