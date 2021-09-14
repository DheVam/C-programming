#include  <stdio.h>

int main () {
    int first,last,num,sum;
    printf("enter a number:");
    scanf("%d",&num);
    last = num%10;
    first =  num;
    while(first >= 10){
        first = first/10 ;
    }

   printf("The Sum Of First and Last Digit Is:%d",num);
}