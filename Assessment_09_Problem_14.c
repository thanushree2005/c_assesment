#include <stdio.h>
int main() {
   int n,f=0,s=0, a[1000];
  while(1){
      scanf("%d",&n);
      if(n==0)break;
        a[f]=n;
        f++;
        s+=n;
  }
  if(f%2!=0){
      printf("%d",a[((f)/2)]);
  }else{
      //printf("%d",(a[(f/2)]+a[(f/2)-1]));
      printf("%d",(a[(f/2)]+a[(f/2)-1])/2);
  }
}
