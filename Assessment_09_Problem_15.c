#include <stdio.h>
int add_digit(int n){int s=0;
    while(n>0){
        int x=n%10;
        s+=x;
        n=n/10;
    }return s;
}
void ascend(int y[],int f){
    for(int i=0;i<f;i++){
        for(int j=i+1;j<f;j++){
            if(y[i]>y[j]){
                int temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }printf("ascending:\n");
    for(int i=0;i<f;i++){
        printf("%d\n",y[i]);
    }
}
int main() {
   int n,f=0,s=0, a[1000];
  while(1){
      scanf("%d",&n);
      if(n==0)break;
        a[f]=n;
        f++;
        s+=n;
  }
  int b[f];
  for(int i=0;i<f;i++){
     b[i]=add_digit(a[i]);
  }
  for(int i=0;i<f;i++){ printf("%d\n",b[i]);
  }
  ascend(b,f);
}
