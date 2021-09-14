#include <stdio.h>

int main () {
    long n;
    int count;

    printf("Enter a number:");
    scanf("%ld",&n);

    while(n!=0){
        n = n/10;
        count++;
    }
    printf("The no of digits are:%d",count);
}