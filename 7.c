// write a function to display fibonaui series upto nth position.
#include <stdio.h>

int fib(int a){
    int b=0,c=1,i=0;
    printf("%d ",b);
    for(int j=0;j<(a-1);j++){
        if(i%2==0){
            printf("%d ",c);
            i++;
        }else{
            printf("%d ",b+=c);
            c+=b;
            i++;
        }
        
    }
    return 0;
}

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    fib(a);
    return 0;
}