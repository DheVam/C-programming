#include <stdio.h>

int main() {
    int i,end;
    printf("Enter the end no:");
    scanf("%d",&end);
    i = end;
  
    while(i>=1){
         printf("%d\n",i);
        i--;
    };
    return 0;
}