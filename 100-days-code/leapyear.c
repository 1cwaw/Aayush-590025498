// define variable a
// input the value of a from screen
// check if a is divisible by 4
// if yes then print its a leap year
// else print that its not

#include<stdio.h>
int main(){
    int a;
    printf("Enter the year: ");
    scanf("%d", &a);

    if( a % 4 == 0){
        printf("The year %d is a leap year", a);
    } else {
        printf("The year %d is not a leap year", a);
    }
    return 0;
}