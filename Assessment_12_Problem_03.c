#include <stdio.h>
#include <stdlib.h>
void find_pos(char *s,char *c){
    char *b=s;int l=0;
    //printf("%d\n",b);
    char *y=c;
    while(*y!='\0'){
        l++;
        y++;
    }
    //printf("%d\n",l);
    while(*s!='\0'){
    int f=0;
    if(*s==*c){
    int x=(s-b)+1;
    char *w=c;
    char *z=s;
     while(*z == *w && *w != '\0' && *z != '\0'){
         f++;
         w++;
         z++;
    }
    if(f==l)
       {
            printf("%d\n",x);
            break;
       }

    }
    s++;

}

}
int main()
{
   char s[100];
   scanf("%s",s);
   //printf("%s\n",s);
   char c[100];
   scanf("\n%s",c);
   //printf("%s\n",c);
   find_pos(s,c);
}
