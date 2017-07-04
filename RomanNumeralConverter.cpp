//
//  Wilson_33.cpp
//  Wilson_33
//
//  Created by Lisa Wilson on 7/3/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int number;
    
    cout << "\n+++++++++++++++++++++++++++++++++\n"
    << "   Roman Numeral Converter \n"
    << "++++++++++++++++++++++++++++++++++\n";
    
    cout << "Enter a number (1-10): ";
    cin >> number;
    
    if(number < 1 || number > 10)
        cout << "The number cannot be less than 1 or greater than 10!! \n\n";
    else{
        switch(number)
        {
            case 1: cout << "The Roman numeral is: I \n";
                break;
            case 2: cout << "The Roman numeral is: II \n";
                break;
            case 3: cout << "The Roman numeral is: III \n";
                break;
            case 4: cout << "The Roman numeral is: IV \n";
                break;
            case 5: cout << "The Roman numeral is: V \n";
                break;
            case 6: cout << "The Roman numeral is: VI \n";
                break;
            case 7: cout << "The Roman numeral is: VII \n";
                break;
            case 8: cout << "The Roman numeral is: VIII \n";
                break;
            case 9: cout << "The Roman numeral is: IX \n";
                break;
            case 10: cout << "The Roman numeral is: X \n";
                break;
            default:  cout << "You must enter a number between 1 - 10!! \n\n";
        }  //switch ends
    }  //else ends
    
    system("pause");
    
    return 0;
}
