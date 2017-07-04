//
//  Wilson_35.cpp
//  Wilson_35
//
//  Created by Lisa Wilson on 7/4/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    double time, time2, minutes, charges;
    
    cout << "               Long distance calls\n"
    << "================================================\n\n";
    
    cout << "Enter the starting time of the call (HH.MM): ";
    cin >> time;
    
    time2 = time - static_cast<int>(time); //gets the fractional part (minutes)
    
    if(time2 > .59)
    {
        cout << "Starting time (minutes) Less than 1 hour in mins \n\n"
        << "Enter the time again (HH.MM): ";
        cin >> time;
    }
    
    if(time > 23.59)
    {
        cout << "Starting time cannot be greater than 23:59!!\n\n"
        << "Enter the starting time again (HH.MM): ";
        cin >> time;
    }
    
    cout << "Enter the duration of the call (minutes): ";
    cin >> minutes;
    if(minutes < 0)
    {
        cout << "Minutes must be 0 or greater !\n\n"
        << "Enter the duration of the call (minutes) again: ";
        cin >> minutes;
    }
    
    cout << fixed << setprecision(2);
    if(time >= 0.00 && time <= 6.59)
    {
        charges = minutes * 0.12;
        cout << "Cost for the call: $" << charges << "\n\n";
    }
    if(time >= 7.0 && time <= 19.0)
    {
        charges = minutes * 0.55;
        cout << "Cost for the call: $" << charges << "\n\n";
    }
    if(time >= 19.01 && time <= 23.59)
    {
        charges = minutes * 0.35;
        cout << "Cost for the call: $" << charges << "\n\n";
    }
    
    system("pause");
    
    return 0;
}
