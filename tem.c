#include<stdio.h>
int main(){
    char ch;
    printf("Enter what you want to find degree_celsius(c) or fahrenheit(f)..\n");
    printf("Enter your value here : ");
    scanf("%c", &ch);

    if(ch == 'c'){
        float degree_celsius, fahrenheit;
        printf("Enter fahrenheit :  ");
        scanf("%f", &fahrenheit);
        degree_celsius = (fahrenheit - 32) * 5 / 9;
        printf("this is your temperature in degree celsius : %.1f", degree_celsius);
    }

    else if(ch == 'f'){
        float degree_celsius, fahrenheit;
        printf("Enter degree_celsius  :  ");
        scanf("%f", &degree_celsius);
        fahrenheit = degree_celsius * 9 / 5 + 32;
        printf("You have this much fever : %.1f", fahrenheit);
    }
    else {
        printf("Sorry invelide data...  *_*");
    }
    return 0;
}