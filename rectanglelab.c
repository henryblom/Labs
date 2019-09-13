//
//  main.c
//  rectangle
//
//  Created by Blom, Henry on 9/12/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>
int main(int argc, const char * argv[]) {
float side1 = 0.0;
float side2 = 0.0;
puts("Enter the length of side 1: \n");
scanf("%f", &side1);
puts("Enter the length of side 2: \n");
scanf("%f", &side2);
float area = (side1 * side2);
float perimeter = (side1 * 2) + (side2 * 2);
printf("Perimeter is %f; Area is %f\n", perimeter, area);
    }
