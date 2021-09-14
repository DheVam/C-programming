#include <stdio.h>

int main () {
    int a,limit;
    
    printf("enter the limit:");
    scanf("%d",&limit);
    while(a<=limit){
        if(a%2==0){
        printf("%d\n",a);
        }
        a++;
    }
    
}