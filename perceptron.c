#include <stdio.h>

int main()
{
    float p;
    float threshold = 1.5;
    
    float input;

    // Sallary
    printf("\nDoes the job have a better sallary? (0 False, 1 True)");
    scanf("%f", &input);
    float x1 = input;
    float w1 = 0.8;

    // Travel Time
    printf("\nDoes the job have a better travel time? (0 False, 1 True)");
    scanf("%f", &input);
    float x2 = input;
    float w2 = 0.4;

    // More Interesting
    printf("\nIs the work more interesting? (0 False, 1 True)");
    scanf("%f", &input);
    float x3 = input;
    float w3 = 0.6;

    // Better Prospects
    printf("\nIs the work have better prospects? (0 False, 1 True)");
    scanf("%f", &input);
    float x4 = input;
    float w4 = 0.7;

    //Disatisfied
    printf("\nAre you happy? (0 False, 1 True)");
    scanf("%f", &input);
    float x5 = input;
    float w5 = 0.8;

    p = (x1 * w1) + (x2 * w2) + (x3 * w4) + (x4 * w4) + (x5 * w5); 

    if (p > threshold) {
        printf("\nYES: You should apply for the new job.");
    }
    else {
        printf("\nNO: You should not apply for the new job.");
    }

    return 0;
}