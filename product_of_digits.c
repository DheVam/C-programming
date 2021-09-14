#include <stdio.h>

int main () {
    int a,b,sum = 1;
    printf("\n Enter A Number : ");
    scanf("%d",&a);
    while(a>0){
        b = a%10;
        sum = sum * b;
        a = a/10;
    }
    printf("The Sum Of The Digits Is : %d",sum);
}