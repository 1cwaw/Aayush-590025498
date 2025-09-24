// define a b c 
// input the value of a from screen
// calculate the area and circumference from formula
// print c and d to screen

#include<stdio.h>
int main(){
    float  a, b, c;
    printf("Enter the value of radius of the circle: ");
    scanf("%f", &a);

    b = 2 * 3.14159 * a;
    c = 3.14159 * a * a;
    printf("Area of the circle is: %.2f\n", c);
    printf("Circumference of the circle is: %.2f\n", b);

    return 0;
}