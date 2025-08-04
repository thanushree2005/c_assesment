#include <stdio.h>
#include<stdlib.h>

void get_array(int,int []);

int main() {
   int num;
   printf("enter array size:");
   scanf("%d",&num);
   int arr[51];
   get_array(num,arr);
   char c[num];
   int j=0,i;
   for(i=0;i<num;i++){
      //printf("%d",arr[i]);
      c[j]=arr[i]+48;
      //printf("%c",c[j]);
      j++;
   }
   c[j]='\0';
   printf("%s",c);
}

void get_array(int size,int a[]){
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
}
