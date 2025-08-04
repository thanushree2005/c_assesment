#include <stdio.h>

int main() {
int n,c=0;
printf("enter a 4 digit no:");
scanf("%d",&n);
int x=n%10;
int y=n-x;
int u=(n/1000)%10;
int w=y-(u*1000);
int f=w/10;
int i=2;
while(i<=f){
    int t=f;
    if(t%i==0){
       c++;
    }
    i++;
}
if(c==1){
    printf("prime");
}else{
    printf("not prime");
}

}
