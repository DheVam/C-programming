#include <stdio.h>

int main(){
    int num,rem,reverse = 0;
    printf("Enter a no: ");
    scanf("%d",&num);

    while(num!=0){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
        }
        printf(" \n The reverse of the number is : %d",reverse);

}