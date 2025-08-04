#include <stdio.h>
#include<stdlib.h>
void disp_integer_array(int,int []);
int string_len(char[]);
int main() {int num=0;
   char c[51];
   scanf("%s",c);
   int len=string_len(c);
   int num_arr[len];
   int j=0,i;
   for(i=0;i<len;i++){
      num_arr[j]=c[i]-48;
      j++;
   }
   disp_integer_array(len,num_arr);
}
int string_len(char c[]){
    int i=0;
    int count=0;
    while(c[i]!='\0'){
        count++;
        i++;
    } return count;
    }
void disp_integer_array(int size,int num_arr[]){
for(int i=0;i<size;i++){
    printf("%d\n",num_arr[i]);
   }

}
