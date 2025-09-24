#include<stdio.h>
int main(){
    int a, charge;
    printf("Enter the number of units consumed: ");
    scanf("%d", &a);

    if( a < 0){
        printf("Invalid");
    } else if ( a <= 100){
        charge = a * 5;
        printf("The electricity bill is %d", charge);
    } else if ( a <= 200){
        charge = 500 + ( a - 100) * 7;
        printf("The electricity bill is %d", charge);
    } else if ( a <= 300){
        charge = 500 + 700 + ( a - 200 ) * 10;
        printf("The electricity bill is %d", charge);
    } else{
        charge = 500 + 700 + 1000 + ( a - 300 ) * 10;
        printf("The electricity bill is %d", charge);
    }

    return 0;

}