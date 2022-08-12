// find the factorial.

#include <stdio.h>

int factorial(int a){
    int b=1;
    while(a!=0){
        b*=a;
        a--;
    }
    return b;
}

float fib(){
    int b=0,c=1,i=0,k=1;
    float s=0;
    for(int j=0;j<4;j++){
        if(i%2==0){
            int z=factorial(k);
            s+=(c*1.0)/z;
        }else{
            int z=factorial(k);
            b+=c;
            s+=(b*1.0)/z;
            c+=b;
        }
        i++;
        k+=2;
    }
    return 0;
}

int main() {
    printf("%f",fib());
    return 0;
}