//
//  main.c
//  fahrenheit
//
//  Created by Blom, Henry on 9/13/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float input1 = 0.0;
    float input2 = 0.0;
    float input3 = 0.0;
    float input4 = 0.0;
    float celsius1 = 0.0;
    float celsius2 = 0.0;
    float celsius3 = 0.0;
    float celsius4 = 0.0;
    float awayfromfreezfa1 = 0.0;
    float awayfromfreezfa2 = 0.0;
    float awayfromfreezfa3 = 0.0;
    float awayfromfreezfa4 = 0.0;
    puts("Enter a temperature in fahrenheit: ");
    scanf("%f", &input1);
    puts("Enter a temperature in fahrenheit: ");
    scanf("%f", &input2);
    puts("Enter a temperature in fahrenheit: ");
    scanf("%f", &input3);
    puts("Enter a temperature in fahrenheit: ");
    scanf("%f", &input4);
    printf("Fahrenheit    Celsius    FreezeFA    FreezeCE\n");
    celsius1 = (.555555) * input1;
    celsius2 = (.555555) * input2;
    celsius3 = (.555555) * input3;
    celsius4 = (.555555) * input4;
    awayfromfreezfa1 = (input1 - 32);
    awayfromfreezfa2 = (input2 - 32);
    awayfromfreezfa3 = (input3 - 32);
    awayfromfreezfa4 = (input4 - 32);
    
    printf("%f,  %f,  %f,  %f\n", input1, celsius1, awayfromfreezfa1, celsius1);
    printf("%f,  %f,  %f,  %f\n", input2, celsius2, awayfromfreezfa2, celsius2);
    printf("%f,  %f,  %f,  %f\n", input3, celsius3, awayfromfreezfa3, celsius3);
    printf("%f,  %f,  %f,  %f\n", input4, celsius4, awayfromfreezfa4, celsius4);
    
    





}
