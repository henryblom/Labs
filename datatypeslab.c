//
//  main.c
//  datatypes
//
//  Created by Blom, Henry on 9/11/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
void datatypeslab(void) {
printf("data type\t minimum value\t maximum value\n");
printf("character\t %d\t\t\t %d\n", CHAR_MIN, CHAR_MAX);
printf("integer\t\t %d\t %d\n", INT_MIN, INT_MAX);
printf("unsigned integer 0\t\t\t %d\n", UINT_MAX);
printf("long integer %ld\t\t\t\t %ld\n", LONG_MIN, LONG_MAX);
printf("unsigned long 0\t\t\t\t %lu\n", ULONG_MAX);
}
