#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int n, i= 0;
    scanf("%d", &n);
   for(int temp=n;temp>0;temp=temp/10){
       i++;
   }
    int m=(n/10);
    int last=n%10;
    int mul=(pow(10,i-1));
    int first=(n/mul)%10;
    //printf("%d\n",m);
    //printf("%d\n",last);
    //printf("%d\n",first);
     //printf("%d\n",mul);
     int w=n-mul;
     int d=(pow(10,i-2));
      //printf("%d\n",d);
     int u=m-(first*d);
     //printf("%d\n",u);
   printf("%d",((last*mul)+first+(u*10)));

}
