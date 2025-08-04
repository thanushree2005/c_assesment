#include <stdio.h>
int disp_reverse_number(int);

int main() {
    int n;
    scanf("%d",&n);
    int r=disp_reverse_number(n);
    printf("%d",r);
    return 0;
}
int disp_reverse_number(int x){
    int temp=x;
    int rev=0,z;
    while(x>0){
        z=x%10;
        rev=rev*10+z;
        x=x/10;
    }
   return rev;
}

