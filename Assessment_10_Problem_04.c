#include <stdio.h>
#include<stdlib.h>
int main() {
   char c[100];
   scanf("%s",c);
   int i=0;
   int num=0;
   while(c[i]!='\0'){
     num=num*10+(c[i]-48);//ascii value of 0 is 48 eg.49-48=1
     i++;
}
      printf("%d",num);
}
