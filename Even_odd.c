#include <stdio.h>

int main()
{
    int x;
    printf("Enter Number - ");
    scanf("%d", &x);
    if(x%2==0)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is odd");
    }
    return 0;
}