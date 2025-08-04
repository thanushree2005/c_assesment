#include <stdio.h>
#include <stdlib.h>
int strcomp(char *src,char *des){
    int f=1;
    while(*src!='\0'&&*des!='\0'){
    if(*des!=*src){f=0;}
    *des++;
    *src++;
}

if(f==0)
    return 0;
else return 1;

}
int main()
{  char s[10]="hi";
   char d[10]="hi";
 if( strcomp(s,d)==1)
    {
        printf("success");
    }
    else{
        printf("failure");
    }
}
