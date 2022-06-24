// To find the area of trianlge whoses sides are entered by the user.
#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("Enter three sides of triangle for its area \n");
    //scaning user entered value
    printf("Enter value of stde a: ");
    scanf("%d", &a);
    printf("Enter value of stde b: ");
    scanf("%d", &b);
    printf("Enter value of stde c: ");
    scanf("%d", &c);
    printf("Your entered value is %d , %d , %d.\n", a, b, c);
    // sp is the semi perameter of the trianlge
    float sp = (a + b + c) / 2;
    printf("Value of Semi perameter : %f\n", sp);
    // aa is a square
    float aa = sp * (sp - a) * (sp - b) * (sp - c);
    printf("Value of a^2 : %f\n", aa);
    float area = sqrt(aa);
    //area = area * 8; 
    printf("Area of triangle is : %f\n", area);
    printf("THANK YOU .....  (*_*) "); 
    return 0;
}