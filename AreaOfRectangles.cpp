//
//  Wilson_32.cpp
//  Wilson_32
//
//  Created by Lisa Wilson on 7/3/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    double length1, length2, width1, width2, area1, area2;
    
    cout << "\n+++++++++++++++++++++++++++++++++++++++\n"
    << "          Areas of Rectangles"
    << "\n+++++++++++++++++++++++++++++++++++++++\n";
    
    cout << "Enter the length for rectangle 1: ";
    cin >> length1;
    cout << "Enter the width for rectangle 1: ";
    cin >> width1;
    cout << "\nEnter the length for rectangle 2: ";
    cin >> length2;
    cout << "Enter the width for rectangle 2: ";
    cin >> width2;
    
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    if(area1 > area2)
        cout << "\nThe area of rectangle 1 is greater than the area of rectangle 2! \n\n";
    else if(area2 > area1)
        cout << "\nThe area of rectangle 2 is greater than the area of rectangle 1! \n\n";
    else if(area1 == area2)
        cout << "\nThe area of both rectangles is the same!!!! \n\n";
    
    system("pause");
    
    return 0;
}
