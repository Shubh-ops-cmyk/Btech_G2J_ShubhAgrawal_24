#include <stdio.h>

int main() {
float c,f;
    
    printf("Enter the temprature in celcius : ");
    scanf("%f", &c);
    
    f = c*1.8+32;
    
    printf ("Temprature in fahrehnite is : %f", f);
    return 0;
}