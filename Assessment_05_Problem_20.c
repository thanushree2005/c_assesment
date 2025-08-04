#include <stdio.h>
int main() {
int c=0,z=1;
for(int j=3;j<=9;j++){
    c=0;
for(int i=2;i<=j;i++){

    if(j%i==0){
       c++;
    }
}
if(c==1){
    z++;}
}
printf("%d",z);

}
