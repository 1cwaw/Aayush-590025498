// define n
// input the value of n from screen
// calculate the sum of natural numbers till n using the sum of natural numbers formula
// print the sum on screen

#include<stdio.h>
int main(){
    int n, a;
    printf("Enter any natural number: ");
    scanf("%d", &n);

    a = (n * (n + 1) )/ 2;

    printf("The sum of all natural numbers till %d is: %d\n", n, a);
    return 0;
}