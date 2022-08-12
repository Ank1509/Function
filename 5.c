// take a string and display in following format.
// aBCD pKLM nT vPR 
// ABCD PKLM NT VPR 
#include <stdio.h>
#include<ctype.h>

char check(char a[]){
    int c=1,i=0;
    char *b=&a[0];
    for(*b;*b!='\0';b++){
        if(c==1){
            *b=toupper(*b);
            c=0;
        }else{
            *b=tolower(*b);
        }
        if(*b==' '){
            c=1;
        }
    }
    printf("%s",a);
    return 0;
}

int main() {
    char a[20];
    printf("Enter a text: ");
    scanf("%[^\n]s",&a);
    check(a);
    return 0;
}