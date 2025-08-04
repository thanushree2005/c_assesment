#include <stdio.h>
#include<stdlib.h>
int string_len(char[]);
int main() {int num=0;
   char c[51];
   scanf("%s",c);
   int i=0,f=0;
   for(i=0;i<51;i++){
       if(c[i]>0&&c[i]<9){
           if(c[i]==0){
               f++;
           }else{
               break;
           }
       }

   }
   int x=string_len(c);
   for(i=f;i<x;i++){
       num=num*10+(c[i]-'0');
   }
   printf("%d",num);
}
int string_len(char c[]){
    int i=0;
    int count=0;
    while(c[i]!='\0'){
        count++;
        i++;
    } return count;
    }
