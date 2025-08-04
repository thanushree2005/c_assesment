#include <stdio.h>
#include <stdlib.h>
void find_pos(char *s,char c){
    char *b=s;
    //printf("%d\n",b);
    while(*s!='\0'){
    if(*s==c){
          //printf("%d\n",s);
       printf("%d\n",(s-b)+1);
    }
    s++;
}
}
int main()
{
   char s[100];
   scanf("%s",s);
   //printf("%s\n",s);
   char c;
   scanf("\n%c",&c);
   //printf("%c\n",c);
   find_pos(s,c);
}
