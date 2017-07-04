//
//  2.cpp
//  2.4
//
//  Created by Lisa Wilson on 6/30/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    const double YEN_PER_DOLLAR = 83.14;
    const double EUROS_PER_DOLLAR = 0.7337;
    const double RAND_PER_DOLLAR = 10.27950;
    const double SHEKEL_PER_DOLLAR = 3.63270;
    
    double dollars, yen, euros,rand, shekel;
    
    cout << setprecision(2) << fixed;
    
    cout << "Enter dollar amount: ";
    cin >> dollars;
    
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;
    rand = dollars * RAND_PER_DOLLAR;
    shekel = dollars * SHEKEL_PER_DOLLAR;
    
    cout << "-------Conversion-------\n";
    cout << "$" << dollars << " = " << yen << " Yen \n";
    cout << "$" << dollars << " = " << euros << " Euros \n\n";
    cout << "$" << dollars << " = " << rand << " rand \n\n";
    cout << "$" << dollars << " = " << shekel << " shekel \n\n";
    
    system("pause");
    
    return 0;
}
