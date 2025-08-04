#include <stdio.h>
#include <stdlib.h>

int main()
{   int num;
    printf("enter a number");
    scanf("%d",&num);
   int s=0;
    for(int t=num;t>0;t=t/10){
        int p=1;
        int z=t%10;
        for(int i=2;i<z;i++){
        if(z%i==0){
         p=0;}}
         if(z==1){
            p=0;
         }
         if(p==1){
            s++;
            //printf("%d\n",z);

    }


   }
   printf("%d",s);
     return 0;
}
