#include  <stdio.h>

int main () {
    int first,last,num;
    printf("enter a number:");
    scanf("%d",&num);
    last = num%10;
    first =  num;
    while(first >= 10){
        first = first/10 ;
    }
    printf("\nthe first digit is:%d",first);
    printf("\nthe last digit is:%d",last);
}