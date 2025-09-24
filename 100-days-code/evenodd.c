// define variables a 
// input the value of a from screen 
// use if else statement to check if the number is divisible by 2
// if divisible by 2 then print that it is even
// if not then print it as odd

#include<stdio.h>
int main(){
    int a;
    printf("Input the value of the integer: ");
    scanf("%d", &a);

    if(a % 2 == 0){
        printf("The number %d is even", a);
      }  else{
            printf("The number %d is odd", a);
        }

    return 0;
    
}