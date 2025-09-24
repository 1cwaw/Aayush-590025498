// define integers a b c
// input the value of a b c from screen
// use if else statements to find biggest integer
// find biggest integer and print it to screen

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Input the value of the three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    int biggest;
    if( a >= b && a >= c){
        printf("The biggest integer is %d", a);
    } else if ( b >= a && b >= c){
        printf("The biggest integer is %d", b);
    } else{
        printf("The smallest integer is %d", c);
    }
    return 0;
}