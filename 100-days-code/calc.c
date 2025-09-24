#include<stdio.h>
int main(){
    int a, b;
    char c;
    printf("Enter the expression: ");
    scanf("%d %d %c", &a, &b, &c);

    switch(c){
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;

    case '*':
        printf("%d * %d = %d", a, b, a*b);
        break;

    case '/':
        if( b != 0){
            printf("%d/%d = %d", a, b, a/b);
        }else{
            printf("Division by zero not possible");
        }
        break;
    
    case'%':
        if(b != 0){
            printf("%d %% %d = %d", a, b, a%b);
        }else{
            printf("Modulus by zero not possible");
        }
        break;

    default:
        printf("Invalid Operator");

    }
    
    return 0;
    
}