#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter a string:");
    char s[100];
    scanf("%s",s);
    int i=0;
    int c=0;
    while(s[i]!='\0'){
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}
