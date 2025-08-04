#include <stdio.h>
int main() {
    int a[5];
    int f=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
}
 for(int i=0;i<5;i++){
     if(a[i]%2==0){
         f++;
     }
 }
 int b[f];
 f=0;
 for(int i=0;i<5;i++){
     if(a[i]%2==0){
         b[f]=a[i];
         f++;
     }
 }
 for(int i=0;i<f;i++){
     printf("%d\n",b[i]);
 }

}
