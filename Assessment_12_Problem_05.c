#include <stdio.h>
void getnumbers(char *num1, char *num2) {
    scanf("%s", num1);
    scanf("%s", num2);
}
int str_len(char c[]) {
    int i = 0;
    while (c[i] != '\0') i++;
    return i;
}
void multiplynumbers(char *num1, char *num2, char *res) {
    int len1=str_len(num1);
    int len2=str_len(num2);
    int a[50]={0},b[50] = {0};
    int result[101] = {0};
    for(int i=0;i<len1;i++)
        {a[i] =num1[len1-1-i] - 48;}
    for(int i=0;i<len2;i++)
       {

        b[i]=num2[len2-1-i]-48;}

    for(int i=0;i<len1;i++) {
        for(int j=0;j<len2; j++) {
            result[i+j] += a[i]*b[j];}
    }

    for(int i=0;i<len1+len2;i++) {
        if(result[i] >9) {
            result[i+1] += result[i] / 10;
            result[i]=result[i]%10;}}
    int k =len1+len2-1;
    while(result[k]==0)
        {k--;}
    for (int i=k;i>=0;i--) {
        res[k-i]=result[i]+48;
    } res[k+1] ='\0';
}

void print(char *res) {
    printf("%s\n", res);
}

int main() {
    char number1[50], number2[50], result[101];
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
    return 0;
}
