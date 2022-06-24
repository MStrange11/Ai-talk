#include<stdio.h>
#include<conio.h>
#include<math.h>
float squart();

int main(){
    char chr;
    int vo, ar, ra, he;
    float pi = 3.14;
    printf("You can enter area(a), volume(v), radius(r), height(h), base area(b), Lateral surface(s),Slant height(l)\n");
    printf("You are finding this values for cone.\n");
    printf("Please enter what you want to find : ");
    scanf("%c", &chr);
    //printf("%c", chr);
    if (chr == 'a'){
        printf("Enetr radius : ");
        scanf("%d", &ra);
        printf("Enetr height : ");
        scanf("%d", &he);
        double out, sqr, inner, area;
        double rt;
        out = ra * pi;
        sqr = he * he + ra * ra;
        //squart();
        rt = sqrt(sqr);
        printf("Square root of %.2lf = %f\n", sqr, rt);
        inner = rt + ra;
        printf("value of out : %f \nand \nvalue of inner : %f", out, inner);
        area = out * inner;  
        printf("\nyour reqiured volume : %.lf cm^2", area);
    }
    else if(chr == 'v'){
        printf("Enetr radius(cm) : ");
        scanf("%d", &ra);
        printf("Enetr height(cm) : ");
        scanf("%d", &he);
        float vol = ra * ra * he * pi;
        printf("your reqiure volume : %f cm^3.", vol / 3);

    }
    else if(chr == 'r'){
        printf("Enetr volume(cm^3) : ");
        scanf("%d", &vo);
        printf("Enetr height(cm) : ");
        scanf("%d", &he);
        float vol = ra * ra * he * pi;
        printf("your reqiure radius : %f cm", vol / 3);
    }
    else if(chr == 'h'){
        printf("Enetr volume(cm^3) : ");
        scanf("%d", &vo);
        printf("Enetr radius(cm) : ");
        scanf("%d", &ra);
        float deno = ra * ra * pi;
        printf("your reqiure height : %f cm", 3 * vo / deno );
    }
    else if(chr == 'b'){
        printf("Enetr radius(cm) : ");
        scanf("%d", &ra);
        float base = ra * ra * pi;
        printf("your reqiure base area : %f cm", base );
    }  
        else if(chr == 's'){
        printf("Enetr radius(cm) : ");
        scanf("%d", &ra);
        printf("Enetr height(cm) : ");
        scanf("%d", &he);
        float lh = ra * pi;
        double sqr = he * he + ra * ra;
        double rt = sqrt(sqr);
        double lenght = lh * rt;
        printf("your reqiure lateral surface : %f cm^2.", lenght);

    } 
        else if(chr == 'l'){
        printf("Enetr radius(cm) : ");
        scanf("%d", &ra);
        printf("Enetr height(cm) : ");
        scanf("%d", &he);
        double sqr = he * he + ra * ra;
        double rt = sqrt(sqr);
        printf("your reqiure Slant height : %f cm.", rt);

    } 
    else {
        printf("invelide data");
    }
return 0;
}