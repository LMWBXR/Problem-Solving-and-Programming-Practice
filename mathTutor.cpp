//
//  2.cpp
//  2.2
//
//  Created by Lisa Wilson on 6/30/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main()
{
    double A, B, C;
    char next;
    unsigned seed = time(0);
    srand(seed);
    
    cout << "Hello, Today we are going to practice math. " << endl;
    cout << "I will display two random numbers, try and solve for the answer." << endl;
    
    A = 1 + rand() % 350;
    B = 1 + rand() % 350;
    C = A + B;
    
    cout << "\n";
    cout << A << " + " << B << " = " << endl;
    cout << "Hit any key and then Enter to show the answer";
    cin >> next;
    cout << "" << endl;
    cout << A << " + " << B << " = " << C << endl;
    return 0;
}
