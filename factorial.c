# include<stdio.h>

int main() {
    int num;
    float f=1;
    
    printf("Enter your number : ");
    scanf("%d", &num);
    for(int i=1; i<=num ;i++) {
        f = f * i;
        /*if (i == num){ 
            printf(" answer for %f factorial is : %f \n", num, f);
        }*/
        printf(" %d answer for %d factorial is : %f \n", i, num, f);
    }
    return 0;
}