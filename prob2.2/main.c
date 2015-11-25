//
//  main.c
//  prob2.2
//
// Calculate trigonometric values of angle α entered by user
// 
//  Created by Thanh C. Tran on 24/11/15.
//  Copyright © 2015 Thanh C. Tran. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float radian;
    printf("cosine(x) with x(rad)= ");
    scanf("%f", &radian);
    printf("cosine(x) = %f\n", cos(radian));
    
    printf("Hello, World!\n");
    return 0;
}
