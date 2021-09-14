#include <stdio.h>

int main(){
    int a,n,sum = 0;
    printf("enter a positive no:");
    scanf("%d",&n);
    
    for(a=1;a<=n;++a){
        sum += a;
    }
    printf("The sum is %d",sum);
    return 0;
}