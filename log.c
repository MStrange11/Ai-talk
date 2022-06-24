#include<stdio.h>
#include<math.h>

int main(){
    float x , logg;
    printf("Please note (.0) is require if not entering decimal value\nEnter the value : ");
    scanf("%f", &x);
    logg = log10(x);
    printf("Logarithm of %.3lf is ====> %1f", x, logg);
    return 0;
}