// Weite a function for finding factorial..

#include <stdio.h>

int factorial(int a){
    int b=1;
    while(a!=0){
        b*=a;
        a--;
    }
    return b;
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("%d",factorial(a));
    return 0;
}