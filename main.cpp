//
//  main.cpp
//  SquareANumber
//
//  Created by Carrie Ward on 3/4/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//
//  Simple C++ program accepts a number, calcualtes and outputs the square of that number.


#include <iostream>
using namespace std;

int main(){
    
    int num, square;
    
    cout << endl << "Enter an integer value: ";
    cin >> num;
    
    square = num*num;
    
    cout << "Your value " << num << "squared is: " << square << endl;
    
}
