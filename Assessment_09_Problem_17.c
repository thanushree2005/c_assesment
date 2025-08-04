#include <stdio.h>

int main() {
    int n;
    printf("enter array size:");
    scanf("%d",&n);
    int a[n];
    int b[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
  int j=0;

  int temp;
  for(int i=0;i<n-1;i++){

    if(a[i]>9){
         temp=a[i];
         a[i+1]+=(a[i]/10)%10;
         b[j]=temp%10;
         j++;

  }else{
      b[j]=a[i];
      j++;
  }
  }

  if(((a[n-1]/10)%10)!=0){
    b[n-1]=a[n-1]%10;
    b[n]=(a[n-1]/10)%10;
    n=n+1;
}
else{
    b[n-1]=a[n-1];
}
  for(int i=0;i<n;i++){
      printf("%d\n",b[i]);
  }  }
