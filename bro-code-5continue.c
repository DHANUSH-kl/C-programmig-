#include <stdio.h>
#include <math.h>

int main() {

    double a;
    double b;
    double c;

    printf("enter side A : ");
    scanf("%lf", &a);
    
    printf("enter side B : ");
    scanf("%lf", &b);

    c = sqrt(a*a + b*b);

    printf("side C : %lf" , c);
    return 0;
}
