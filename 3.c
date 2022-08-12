// take a three word string and display it's middle word and count the number of leter's present in the middle word.
#include <stdio.h>
int main() {
   int c=0,l=0;
   char a[25];
   printf("Enter text: ");
   gets(a);
   for(int i=0;a[i]!='\0';i++){
       if(a[i]==' '){
            c++;
       }
       if(c==1){
           printf("%c",a[i+1]);
          l++;
       }
   }
  printf("\nThe number of letter in is %d",l-1);
    return 0;
}