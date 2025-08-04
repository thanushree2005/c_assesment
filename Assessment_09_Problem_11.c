#include <stdio.h>
#include<math.h>
int reverse(int x){
    int rev=0;
    while(x>0){
        int y=x%10;
        rev=rev*10+y;
        x=x/10;
    }
    return rev;
}
int main() {
    int a[5];
    int f=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
}
int b[5];
for(int i=0;i<5;i++){
    b[i]=reverse(a[i]);
}
for(int i=0;i<5;i++){
   printf("%d\n",b[i]);
}
 for(int i=0;i<5;i++){
     f+=b[i];
 }
 printf("sum:%d",f);
      }
