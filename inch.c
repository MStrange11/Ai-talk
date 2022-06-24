# include<stdio.h>

int main() {
    int run = 1;
    while (run==1){
        double inch = 0.3937007870;
        long n;
        printf("Type 202 to exit \n");
        printf("Enter your number : ");
        scanf("%d", &n);
        if(n == 202){
            break;
        }
        else{
            printf("%f \n", inch);
            double inch_value = n * inch;
            printf("your answer for %d cm is   : %f inch.\n", n, inch_value);
            double cm_value = n / inch;
            printf("your answer for %d inch is : %.2lf     cm.\n\n", n, cm_value);

        }
    }
    return 0;
}