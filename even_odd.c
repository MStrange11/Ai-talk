#include<stdio.h>

int main(){
int n;
char run = 'T';
while(run == 'T') {
    printf("\nEnter a number : ");
    scanf("%d", &n );
    if(n%2 == 0){
        printf("The input number is even.");    
    }
    else {
        printf("The input number is odd.");
    }
}
    return 0;
}
