#include <stdio.h>
#include <stdlib.h>
int count(char*s){int f=0;
    while(*s!=0){
            if((*s==' '&& *(s+1)!=' '))
        f++;
        s++;
    }return f;
}
int main()
{
   char s[100];
   fgets(s,sizeof(s),stdin);
   printf("%s",s);
   int c=count(s);
   printf("%d",c+1);
}
