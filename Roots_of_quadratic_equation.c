#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,D,r1,r2;
    
    printf("Enter the value of variables of equation ax^2 + bx +c = 0\n");
    printf("Enter the value of a ;- ");
    scanf("%d",&a);
    printf("Enter the value of b ;- ");
    scanf("%d",&b);
    printf("Enter the value of c ;- ");
    scanf("%d",&c);
    
    D = b*b - 4*a*c;
    if(D>=0)
    {
    r1 = (-b + sqrt(D))/2*a;
    r2 = (-b - sqrt(D))/2*a;
    printf("Value of r1 and r2 are %d and %d.", r1,r2);
    }
    else
    {
    printf("Roots are imaginary");
    }
    return 0;
}