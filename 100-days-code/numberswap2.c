// define a and b
// print a and b from screen
// use mathematical formula to get swap the values of the two numbers then print it to screen

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The values after swapping are: %d, %d", a, b);
    
    return 0;
}