#include <stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int n, i= 0;
    scanf("%d", &n);
    int temp=n;
   while(temp>0){
       i++;
       temp=temp/10;
   }//printf("%d\n",i);
    int x=(n/10);
    int y=n%10;
    int doy=(pow(10,i-1));
    int z=(n/doy)%10;
    //printf("%d\n",x);
    //printf("%d\n",y);
    //printf("%d\n",z);
     //printf("%d\n",doy);
     int w=n-doy;
     int doy1=(pow(10,i-2));
      //printf("%d\n",doy1);
     int u=x-(z*doy1);
     //printf("%d\n",u);
   printf("%d",((y*doy)+z+(u*10)));

}
