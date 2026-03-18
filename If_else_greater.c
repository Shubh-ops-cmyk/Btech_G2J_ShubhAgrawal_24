#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter Number - ");
    scanf("%d", &x);
    printf("Enter Number - ");
    scanf("%d", &y);
    if(x==y)
    {
        printf("It is Equal");
    }
    else if(x>y)
    {
        printf("1st no. is greater");
    }
    else
    {
        printf("2nd no. is greater");
    }
    return 0;
}