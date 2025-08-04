#include <stdio.h>
#include <stdlib.h>
void strcon(char *src1,char *src2,char *des){
 while(*src1!='\0'){
    *des=*src1;
    *des++;
    *src1++;
}
while(*src2!='\0'){
    *des=*src2;
    *des++;
    *src2++;
}
*des='\0';
}
int main()
{  char s1[10]="wel";
   char s2[10]="come";
   char d[100];
 strcon(s1,s2,d);
 printf("%s",d);
}
