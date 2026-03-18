#include<stdio.h>

int main ()
{
int a;
   printf("year : ");
   scanf("%d", &a);
   
   int leap = a%4==0 && a%100!=0 || a%400==0;
   switch(leap)
   {
       case 1:
          {
              printf("This is leap year");
          }
          break;
       case 0:
          {
              printf("This is not a leap year");
          }
          break;
   }
     return 0;
}

     