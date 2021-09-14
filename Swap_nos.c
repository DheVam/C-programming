// Written By Dheeraj Vamshi
// C file
// 14/09/21



//with return type and with arguments
 #include <stdio.h>
int swap(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
   return a;
}
int swap1(int a,int b){
    int c;
    c=a;
    a=b;
    b=c;
   return b;
}

int main(){
   printf("%d",swap(10,20));
   printf(",%d",swap1(10,20));
}  

//with return type and without arguments

/*  #include <stdio.h>
int swap(){
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
   return a;
}
int swap1(){
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
   return b;
}

int main(){
   printf("%d",swap());
   printf(",%d",swap1());
} 

//without return type and with arguments 
#include <stdio.h>
int swap(int a, int b){
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d,%d",a,b);
  
}


int main(){
 swap(10,20);
} 

//without return type and withoyt arguments 
#include <stdio.h>
int swap(){
    int a=10,b=20,c;
    c=a;
    a=b;
    b=c;
    printf("%d,%d",a,b);
  
}


int main(){
 swap();
}

// function to find factorial of given number
#include <stdio.h>
 
 int factorial( int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
 
int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}*/
