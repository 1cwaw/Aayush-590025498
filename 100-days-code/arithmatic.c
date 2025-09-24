// define a to f
// input value of and b from screen
// add (c)
// subtract (d)
// quotient (f)
// multiply (e)
// print the values of the multiplication, division, subtraction and addition

#include<stdio.h>
int main(){
    int a, b, c, d, e;
    float f;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    c = a + b;
    d = a - b;
    e = a*b;
    
    
    if (b != 0){
        f = (float)a / b;
        printf("The quotient of %d and %d is: %2f\n", a, b, f);
    } else{
        printf("Division by zero is not allowed\n");
    }

    printf("The sum of %d and %d is: %d\n", a, b, c);
    printf("The subtraction of %d and %d is: %d\n", a, b, d);
    printf("The multiplication of %d and %d is: %d\n", a, b, e);
    
    return 0;

}