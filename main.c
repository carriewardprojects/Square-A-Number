//
//  main.c
//  NumberSquared
//
//  Created by Carrie Ward on 3/4/17.
//  Copyright © 2017 Carrie Ward. All rights reserved.
//
// A simple C language program that accepts an input value, calculates the value squared, and outputs the result.

#include <stdio.h>

int main(){
    
    int num, square;
    
    printf("\nEnter an integer value: ");
    scanf("%d", & num);
    
    square = num*num;
    
    printf("\n%d squared is %d\n", num, square);

}
