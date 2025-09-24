// define a variable a
// input the value of a from screen
// check if a is greater, less or more than 0
// print the different results to screen

#include<stdio.h>
int main(){
    int a;
    printf("Input the value of the integer: ");
    scanf("%d", &a);

    if( a >= 0){
        if( a == 0){
        printf("The number is zero", a);
        } else{
        printf("The number %d is positive", a);
        } 
    } else{
    printf("The number %d is negative", a);
    }

    return 0;
    
}