#include<stdio.h>

int error();
int main(){
    char chr;
    printf("Enter percentage(P), discount(d) :  ");
    scanf("%c",&chr);

    if (chr == 'p'){
    //int tot;
    float per, tot, opt;
    printf("Enetr total obtained marks : ");
    scanf("%d", &opt);
    printf("Enetr total marks : ");
    scanf("%d", &tot);
    per = opt * 100 / tot;
    printf("your percentage : %f percentage", per);
    }

    //tag price * (100 - dis(%)) / 100
    else if(chr == 'd'){
        int dis, tag_price;
        float amount;
    printf("Enetr discount in percentage : ");
    scanf("%d", &dis);
    printf("Enetr tag price : ");
    scanf("%d", &tag_price);
    amount = tag_price * (100 - dis) / 100;
    if(amount > 0){
    printf("your final price : %.3lf Rs", amount);
    }
    else if(amount == 0){
        printf("\n<...............FREE..............>");
    }
    }
    else {
        printf("Sorry invelide element...");
    }
}
