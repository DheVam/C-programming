#include <stdio.h>

int main(){
    int num,rem,reverse = 0;
    printf("Enter a no: ");
    scanf("%d",&num);
    int temp = num;

    while(num!=0){
        rem = num%10;
        reverse = reverse*10 + rem;
        num = num/10;
        }
    if(temp==reverse){
        printf("The given number is a palindrome");
    }else{
        printf("the given no is not a palindrome");
    }
}