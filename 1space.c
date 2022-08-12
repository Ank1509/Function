// space question...by using string.
#include <stdio.h>
int main() {
   int c=0,l;
   char a[25];
   printf("Enter text: ");
   gets(a);
   for(int i=0;a[i]!='\0';i++){
       l=i;
       if(a[i]==' '){
            c++;
       }
   }
    printf("\nTotal number of spaces is %d",c);
    return 0;
}