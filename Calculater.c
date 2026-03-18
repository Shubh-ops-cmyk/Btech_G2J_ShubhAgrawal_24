#include<stdio.h>
#include<math.h>

int main() {
    char operater;
    int a,b;

    printf("Enter the operation (+,-,/,*) :-  ");
    scanf("%c",&operater);
    printf("Enter 1st number :-\n");
    scanf("%d",&a);
    printf("Enter 2nd number :-");
    scanf(" %d ",&b);
    switch(operater)
    {
    case '+' : printf("the value of adding %d and %d is %d", a, b, a+b);
    break;
    case '-' : printf("the value of subtracting %d and %d is %d", a, b, a-b);
    break;
    case '*' : 
    printf("the value of multiplying %d and %d is %d", a, b, a*b);
    break;
    case '/' :
    if(b !=0) 
    printf("the value of dividing %d and %d is %d", a, b, a/b);
    else
    printf("Error");
    break;
    default:
    printf("Error");
    }

    return 0;
}