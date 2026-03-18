#include <stdio.h>

int main() {
    int a;
    printf("Enter the age :- ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("You are an Adult.");
    }
    else
    {
        printf("You are a Minor");
    }
    return 0;
}