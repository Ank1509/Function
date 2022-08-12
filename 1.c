// Take a string with multiple words and display how many space are present in the string.

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
   if(a[l]==' '){
       printf("\nTotal number of words is %d",c);
   }else{
       printf("\nTotal number of words is %d",++c);
   }
    return 0;
}