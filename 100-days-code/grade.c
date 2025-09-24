// define variables a 
// input the value of a from screen
// use if else statement to check which grade a lies in
// print the grade to screen

#include<stdio.h>
int main(){
    int a;
    printf("Enter your grade: ");
    scanf("%d", &a);

    if( a < 0 || a > 100){
        printf("Invalid Grade");
    } else if( 100 >= a && a >= 90 ){
        printf("Grade A\n");
    } else if ( 89 >= a && a >= 80 ){
            printf("Grade B\n");
    } else if ( 79 >= a && a >= 70){
        printf("Grade C\n");
    } else if( 69 >= a && a >= 60){
        printf("Grade D\n");
    } else{
        printf("Grade F\n");
    }
    return 0;
}