// define a and b
// input the value of a from screen
// calculate fahrenheit from celcius
// print b

#include<stdio.h>
int main(){
    float a, b;

    printf("Enter the temperature in celcius:");
    scanf("%f", &a);

   b = ( a * 9 / 5) + 32;
   printf("The temperature in fahrenheit is: %.2lf\n", b);

   return 0;


}
