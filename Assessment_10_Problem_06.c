#include <stdio.h>
#include<stdlib.h>
int rev(int num){
    int rev=0;
    while(num>0){
        int x=num%10;
        rev=rev*10+x;
        num=num/10;
    }return rev;
}
int main() {int num;
   char c;
   scanf("%d",&num);
   int num1=rev(num);
   while(num1>0){
       int x=num1%10;
       num1=num1/10;
       c=x+'0';
         printf("%c\n",c);
      }
}
