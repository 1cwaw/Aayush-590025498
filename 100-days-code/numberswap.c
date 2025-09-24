// define a b c
// input the value of a and b from screen
// set c=a, a=b, b=c
// print the new value to screen

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

   c = a;
   a = b;
   b = c;

   printf("The numbers after swap is: %d, %d", a, b);

   return 0;
   
    
}