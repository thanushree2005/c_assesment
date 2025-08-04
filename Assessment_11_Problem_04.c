#include <stdio.h>
#include <stdlib.h>
int sum_digits(int z){
    int s=0;
while(z>0){
    int w=z%10;
    s+=w;
    z=z/10;
}
return s;
}
int find_2digit_odd_sum7(int *y){ int t=0;
    for(int i=10;i<=99;i++){
       if(sum_digits(i)==7&&(i%2!=0))  {
        *y=i;
        y++;
        t++;
       }
    }

  return t;
}
int main()
{  int arr[100];
   int n=find_2digit_odd_sum7(arr);
   for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
   }
}
