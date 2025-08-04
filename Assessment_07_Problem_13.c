#include <stdio.h>
void disp_reverse_number(int);

int main() {
    int n;
    scanf("%d",&n);
    disp_reverse_number(n);
    return 0;
}
void disp_reverse_number(int x){
    int temp=x;
    int rev=0,z;
    while(x>0){
        z=x%10;
        rev=rev*10+z;
        x=x/10;
    }
    printf("%d",rev);
}

