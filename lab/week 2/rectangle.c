// define a b c d
// input the value of a and b from screen
// use the formula of perimeter to calculate c and d
// print c and d

#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &a, &b);

    c = 2 * (a + b);
    d = a*b;

    printf("The perimeter of rectangle is: %d\n", c);
    printf("The area of rectangle is: %d\n", d);
    
    return 0;

}