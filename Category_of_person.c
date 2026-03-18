#include <stdio.h>

int main() {
    int a;
    printf("Enter the age :- ");
    scanf("%d",&a);
    if(a>=0,a<=12)
    {
        printf("You are an Child.");
    }
     else if(a>=13,a<=17)
    {
        printf("You are an Teen.");
    }
     else if(a>=18,a<=60)
    {
        printf("You are an Adult.");
    }
    else
    {
        printf("You are a Senier Citison");
    }
    return 0;
}