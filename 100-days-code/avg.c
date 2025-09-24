#include<stdio.h>
int main(){
    float a, b, c, d;
    printf("Enter the value of the three integers: ");
    scanf("%f %f %f", &a, &b, &c, &d);

    d = (a + b + c) / 3;

    printf("The average of the three numbers %.2lf, %.2lf, %.2lf is: %.2lf", a, b, c, d);

    return 0;
}