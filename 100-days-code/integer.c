//define five integers a,b,c,d,e
//let the user decide the value of all the integers
// use if statements to find smallest integer
//find the smallest integer and define it as smallest
//print smallest

#include<stdio.h>
int main(){
    int a, b, c, d, e;
    printf("Enter the value of the five integers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    int smallest;
    smallest = a;
    if (b < smallest)
    smallest = b;
    if (c < smallest)
    smallest = c;
    if (d < smallest)
    smallest = d;
    if (e < smallest)
    smallest = e;

    printf("The smallest integer is: %d\n", smallest);

    return 0;
    
    }