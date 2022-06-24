#include<stdio.h>
#include<math.h>

int main(){
int sinn, coss, tann;
int x, run = 1;
char chr;

while(run == 1){
    printf("Enetr for sin(s), cos(c), tan(t), exit(e)..., : ");
    scanf("%c", &chr);
    if(chr == 's' || chr == 'c' || chr == 't' ){
    printf("Valide data [ 0, 30 , 45, 60 , 90],\nEnter degree : ");
    scanf("%d", &x);
    }
    else if(chr = 'e'){}
    else {printf("Sorry invalide data .... ^_^");}
    //printf("%c and %d", chr, x);
    if(chr == 's'){
        if(x == 0){
            printf("Value of sin 0%c : 0", 248);
        }else if(x == 30){
            printf("Value of sin 30%c : 1/2", 248);
        }else if(x == 45){
            printf("Value of sin 45%c : 1/%c2", 248, 251);
        }else if(x == 60){
            printf("Value of sin 60%c : %c3/2", 248, 251);
        }else if(x == 90){
            printf("Value of sin 90%c : 1", 248);
        }else{
            printf("Sorry invalide data .... (*_*)");
        }
    }
    else if(chr == 'c'){
        if(x == 90){
            printf("Value of cos 0%c : 0", 248);
        }else if(x == 60){
            printf("Value of cos 30%c : 1/2", 248);
        }else if(x == 45){
            printf("Value of cos 45%c : 1/%c2", 248, 251);
        }else if(x == 30){
            printf("Value of cos 60%c : %c3/2", 248, 251);
        }else if(x == 0){
            printf("Value of cos 90%c : 1", 248);
        }else{
            printf("Sorry invalide data .... (*_*)");
        }
    }
    else if(chr == 't'){
        if(x == 0){
            printf("Value of tna 0%c : 0", 248);
        }else if(x == 30){
            printf("Value of tan 30%c : 1/%c3", 248, 251);
        }else if(x == 45){ 
            printf("Value of tan 45%c : 1", 248);
        }else if(x == 60){
            printf("Value of tan 60%c : %c3/", 248, 251);
        }else if(x == 90){
            printf("Value of tan 90%c : not difine. ", 248);
        }else{
            printf("Sorry invalide data .... (*_*)");
        }
    }
    else {
        printf("\nThank you for using me ...*_*...");
        run = 0;
    }
return 0;
}
}