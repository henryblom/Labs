//
//  main.c
//  pythag
//
//  Created by Blom, Henry on 9/10/19.
//  Copyright © 2019 Blom, Henry. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float legone = 0.0;
    float legtwo = 0.0;
    float answer = 0.0;
    float legonepower = 0.0;
    float legtwopower = 0.0;
    float addition = 0.0;
    printf("What is the length of leg number one?\n");
    scanf("%f", &legone);
    printf("what is the length of leg number two?\n");
    scanf("%f", &legtwo);
    legonepower = pow(legone, 2);
    legtwopower = pow(legtwo, 2);
    addition = (legtwopower + legonepower);
    answer = sqrt(addition);
    printf("Hypotenuse is %f\n", answer);
}
