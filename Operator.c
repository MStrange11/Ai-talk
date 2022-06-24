//operator
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>


void plus(float a,float b);
void minus(float a,float b);
void multiplication(float a,float b);
void divide(float a,float b);

int main() {
    float a, b;
    char chr;
   
    // printf("%C.......", chr);
    int run = 1;
    while(run == 1){
        //char arr[] = {'p', 'i', 'm','d'};
        int input = 1;
        if(input == 1){
            printf("Choose your operator { p = +, i = -, m = *, d = /, q = exit } \n Enter your operator : ");
            scanf("%c", &chr);
            Sleep(500);

            printf("Enter your first number : ");
            scanf("%f", &a);
            
            printf("Enter your second number : ");
            scanf("%f", &b); 
            input = 0;
        }

    if(chr == 'p'){
        plus(a, b);
        input = 1;
        // printf("your answer : %.2lf", a + b);
    }
    else if(chr == 'i'){
        minus(a, b);
        input = 1;
        // printf("your answer : %.2lf", a - b);

    }
    else if(chr == 'm'){
        multiplication(a, b);
        input = 1;
        // printf("your answer : %.3lf", a * b);

    }
    else if(chr == 'd'){
        divide(a, b);
        input = 1;
        // printf("your answer : %f", a / b);
    }
    else if(chr == 'q'){
        run = 0;    
    }
    else{
        printf("invelide data\n");
    }
    
}   
return 0;
}


void plus(float a,float b){
printf("your answer : %.2lf\n", a + b);
}
void minus(float a,float b){
printf("your answer : %.2lf\n", a - b);
}
void multiplication(float a,float b){
printf("your answer : %.2lf\n", a * b);
}
void divide(float a,float b){
printf("your answer : %.2lf\n", a / b);
}
