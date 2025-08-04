#include <stdio.h>
#include <stdlib.h>
void strcopy(char *src,char *des){
while(*src!='\0'){
    *des=*src;
    *des++;
    *src++;
}
*des='\0';

}
int main()
{  char s[10]="hello";
   char d[10];
    strcopy(s,d);
    printf("after copy\n");
   printf("%s",d);
}
