#include <stdio.h>
#include <stdlib.h>

void getnumbers(char *num1,char *num2){
    scanf("%s",num1);
    scanf("%s",num2);

}
int str_len(char c[]){
    int i=0;
    int count=0;
    while(c[i]!='\0'){
        count++;
        i++;
    } return count;
    }

void addnumbers(char *num1,char *num2,char *res){
    int a[50]={0};
    int i=str_len(num1);


    int b[50]={0};
    int j=str_len(num2);

    int c[51];
    for(int z=0;z<i;z++)
        a[z]=num1[i-1-z]-48;
    for(int z=0;z<j;z++)
        b[z]=num2[j-1-z]-48;
    int carry = 0;
    int k=0;
    int l=(i>j)?i:j;


    for (int in =0 ; in <l; in++) {
        int sum = a[in] + b[in] + carry;
        c[k++] = sum % 10;
        carry = sum / 10;

    }
    if (carry) {
        c[k++] = carry;
    }


    for (int id =0; id<k; id++) {
       res[id]=c[k-1-id]+48;
    }
    res[k]='\0';

}

void print(char *res){
printf("%s",res);
}
int main()
{
    char number1[51];
    char number2[51];
    getnumbers(number1,number2);
    char result[52];
    addnumbers(number1,number2,result);
    print(result);
    return 0;
}

