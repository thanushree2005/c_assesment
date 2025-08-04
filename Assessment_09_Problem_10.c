#include <stdio.h>
#include<math.h>
int main() {
    int a[5];
    int f=0;
    int p;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
}
 for(int i=0;i<5;i++){
     p=1;
     for(int k=2;k<(a[i]);k++){
         if(a[i]%k==0||a[i]==2){
             p=0;
         }
     }
     if(p==0||a[i]==1) f++;
 }
 printf("\n%d\n",f);
int b[f];
 f=0;
 for(int i=0;i<5;i++){
     p=1;
     for(int k=2;k<(a[i]);k++){
         if(a[i]%k==0||a[i]==2){
             p=0;
         }
     }
     if(p==0||a[i]==1) {
         b[f]=a[i];
         f++;}
 }
 for(int i=0;i<f;i++){
     printf("%d\n",b[i]);
 }


      }
