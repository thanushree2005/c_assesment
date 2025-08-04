#include <stdio.h>
#include <stdlib.h>

void getnumbers(char *num1,char *num2){
    printf("enter 2 numbers\n");
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


void subnumbers(char *num1,char *num2,char *res){
    int a[50]={0};
    int i=str_len(num1);


    int b[50]={0};
    int j=str_len(num2);

    int c[51];
    for(int z=0;z<i;z++)
        a[z]=num1[i-1-z]-48;
    for(int z=0;z<j;z++)
        b[z]=num2[j-1-z]-48;

for(int z=0;z<i;z++){
    c[z]=a[z]-b[z];
    if(c[z]<0){
        c[z]=(10+a[z])-b[z];
        a[z+1]=a[z+1]-1;
    }
}
   int k=i-1;
   while(c[k]==0)
        {k--;}
    for (int i=k;i>=0;i--) {
        res[k-i]=c[i]+48;
    } res[k+1] ='\0';

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


void divnumbers(char *num1, char *num2, char *res) {
    int len1=str_len(num1);
    int len2=str_len(num2);
    int div=0;
    int result[50] = {0};

    for(int i=0;i<len2;i++)
       {
        div=div*10+num2[i]-48;}

     int t=0,z=0,k=0;
     while(z<len1){
        t=t*10+num1[z]-48;
        if(t>=div){
        result[k++]=(t/div);
        t=t%div;
        } else if(k!=0){
        result[k++]=0;}
        z++;
     }

    if (k == 0) result[k++] = 0;
    for (int i=0;i<k;i++) {
        res[i]=result[i]+48;
    } res[k] ='\0';
}


void print(char *res){
printf("%s",res);
}
int main()
{
    printf("1.add 2.sub 3.mul 4.div 5.exit");
    while(1){int c;
    printf("\nenter choice");
    scanf("%d",&c);
    switch(c){
        char n1[50];
        char n2[50];
        char res[101];
     case 1:

         getnumbers(n1,n2);
         addnumbers(n1,n2,res);
         print(res);
         break;
     case 2:

         getnumbers(n1,n2);
         subnumbers(n1,n2,res);
         print(res);
        break;
     case 3:

         getnumbers(n1,n2);
         multiplynumbers(n1,n2,res);
         print(res);
        break;
     case 4:

         getnumbers(n1,n2);
         divnumbers(n1,n2,res);
         print(res);
        break;
     case 5:
        return 0;

    }
    }

}
