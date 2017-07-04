#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double hours, total, limit;
    char package;
    
    cout << "Which package do you have A, B, or C? : ";
    package = cin.get();
    
    if(package == 'A' || package == 'B' || package == 'C')
    {
        
        cout << "\nHow many hours were used: ";
        cin >> hours;
        
        if(hours > 744 || hours < 0)
        {
            cout << "Hours cannot be greater than 744 or less than 0!! \n\n"
            << "Enter hours again: ";
            cin >> hours;
        }
        
        if(package == 'A')
        {
            limit = 9.95;
            if(hours < 10)
            {
                total = limit;
            }
            else
                total = ((hours - 10) * 2) + limit;
            
            cout << "The amount due is: $" << total << "\n\n";
        }
        
        if(package == 'B')
        {
            limit = 14.95;
            if(hours < 20)
                total = limit;
            else
                total = ((hours - 20) * 1) + limit;
            
            cout << "The amount due is: $" << total << "\n\n";
        }
        
        if(package == 'C')
        {
            limit = 19.95;
            total = limit;
            cout << "The amount due is: $" << total << "\n\n";
        }
    }
    else
        cout << "You did not enter A, B, or C!! \n\n"
        << "Please run the program again!! \n\n";
    
    system("pause");
    
    return 0;
}//
//  Wilson_34.cpp
//  Wilson_34
//
//  Created by Lisa Wilson on 7/4/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
