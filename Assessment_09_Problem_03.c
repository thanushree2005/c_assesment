#include <stdio.h>

int main() {
    // Write C code here
    int a[5],s;
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    s=a[0];
    for(int i=0;i<5;i++){
    if(a[i]<s){
           s=a[i];
       }}
    printf("%d",s);
}
