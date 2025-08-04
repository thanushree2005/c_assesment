#include <stdio.h>

int main() {
int c=0,z=1;
int j=3;
while(j<=9){
    c=0;
    int i=2;
while(i<=j){

    if(j%i==0){
       c++;
    }
    i++;
}
if(c==1){
    z++;
}
j++;

}
printf("%d",z);

}
