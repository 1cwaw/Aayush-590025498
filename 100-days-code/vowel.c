// define variable a
// input the value of a from screen
// use if else statements to recognize if the variable is a vowel or not
// print the appropriate response

#include<stdio.h>
int main(){
    char a;
    printf("Enter your alphabet: ");
    scanf("%c", &a);
    if( a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z'){
        if( a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        printf("%c is a vowel", a);
         } else{
            printf("%c is a consonant", a);
         }

        } else{
            printf("%c is not an alphabet", a);
        }
    return 0;
}