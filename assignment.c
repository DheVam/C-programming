// palindrome program

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

// string copy program 

#include <stdio.h>
int main() {
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}