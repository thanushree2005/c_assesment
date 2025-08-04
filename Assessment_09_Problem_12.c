#include <stdio.h>
int main() {
   int n,f=0,s=0;
int a[100];
int i=0;
  while(1){
        scanf("%d",&n);
        if(n==0)break;
        else{
            a[i]=n;
            i++;
            s+=n;
        }
}
printf("%d\n",i);
printf("sum:%d",s);
}
