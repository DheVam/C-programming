#include <stdio.h>

 int main(){
     int num,n,firstDigit;
     printf("enter a no :");
     scanf("%d",&num);
     while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
     printf("the first digit is :%d",firstDigit);
     return 0;
 }