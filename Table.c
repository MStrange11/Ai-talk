#include<stdio.h>

int main(){
    int n, run;

    while(n != 202){
    printf("\n\nEnter number : ");
    scanf("%d", &n);
    if(n == 202){break;}
    for(int i = 1; i < 11; i++){
        int product = n * i;
        printf("\n%d * %d = %d", n, i, product);
    }}
    return 0;
}