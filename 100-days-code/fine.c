#include<stdio.h>
int main(){
    int a, fine;
    printf("Enter the number of days the book has been issued for: ");
    scanf("%d", &a);

    if( a < 0 ){
        printf("Invalid");
    }else if( a <= 5){
        fine = a * 2;
        printf("Fine is %d", fine);
    }else if( a <= 10 ){
        fine = 10 + ( a - 5) * 4;
        printf("Fine is %d", fine);
    }else if( a <= 30){
        fine = 10 + 20 + ( a - 10 ) * 6;
        printf("Fine is %d", fine);
    }else{
        printf("Membership cancelled");
    }

    return 0;
}