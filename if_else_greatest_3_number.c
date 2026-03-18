#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter Number - ");
    scanf("%d", &x);
    printf("Enter Number - ");
    scanf("%d", &y);
    printf("Enter Number - ");
    scanf("%d", &z);
    if(x>y)
    {
        printf("1st no. is greater");
    }
     else if(z>y)
    {
        printf("3rd no. is greater");
    }
    else
    {
        printf("2nd no. is greater");
    }
    return 0;
}