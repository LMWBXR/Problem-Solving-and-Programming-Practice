//
//  2.cpp
//  2.3
//
//  Created by Lisa Wilson on 6/30/17.
//  Copyright © 2017 Lisa Wilson. All rights reserved.
//

#include <stdio.h>
#include <iostream>

int main() {
    const int DOLLAR = 100 , HALF_DOLLAR = 50 ,
    QUARTER = 25 , DIME = 10 , NICKEL = 5 ,
    PENNY = 1;
    int price = 0 , paid = 0; //int not double
    int number_dollar = 0 , number_half = 0 ,
    number_quarter = 0 , number_dime = 0 ,
    number_nickel = 0 , number_penny = 0 ,
    change = 0;
    
    std::cout << "Please enter the price(cents): ";
    std::cin >> price;
    std::cout << "Please enter what you paid(cents): ";
    std::cin >> paid;
    
    change = paid - price; //dont need to convert to dollars anymore
    
    number_dollar = change / DOLLAR;
    change %= DOLLAR;
    
    number_half = change / HALF_DOLLAR;
    change %= HALF_DOLLAR;
    
    number_quarter = change / QUARTER;
    change %= QUARTER;
    
    number_dime = change / DIME;
    change %= DIME;
    
    number_nickel = change / NICKEL;
    change %= NICKEL;
    
    number_penny = change / PENNY;
    change %= PENNY;
    
    std::cout << "Dollars - " << number_dollar << std::endl
    << "Half    - " << number_half   << std::endl
    << "Quarter - " << number_quarter<< std::endl
    << "Dime    - " << number_dime   << std::endl
    << "Nickel  - " << number_nickel << std::endl
    << "Penny   - " << number_penny  << std::endl;
}

