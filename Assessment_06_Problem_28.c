#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, lcm = 1, i, x=0, y=0,m=0;
    printf("enter 2 numbers");
    scanf("%d %d", &n1, &n2);
    i = 1;
    while ( i <= n1 && i <=n2) {
        if (n1 % i == 0 && n2 % i == 0) {

            lcm*=i;
            n1=n1/i;
            n2=n2/i;

            i=1;}
             i++;
            }
          lcm*=n1*n2;
    printf("%d\n", lcm);

    return 0;
}
