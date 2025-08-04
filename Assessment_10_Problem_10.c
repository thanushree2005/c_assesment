#include <stdio.h>
#include<stdlib.h>
int string_len(char[]);
int main() {int num=0;
   char c[51];
   scanf("%s",c);
   int x=string_len(c);
   char rev[x];
   int j=0,i;
   for(i=x-1;i>=0;i--){
      rev[j]=c[i];
      j++;
   }
   rev[j]='\0';
   printf("%s",rev);
}
int string_len(char c[]){
    int i=0;
    int count=0;
    while(c[i]!='\0'){
        count++;
        i++;
    } return count;
    }
