#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2,n3, lcm1 = 1, i, x=0, y=0,m=0,lcm2 = 1;
    printf("enter 3 numbers");
    scanf("%d %d %d", &n1, &n2,&n3);
    i=1;
   while(i <= n1 && i <=n2 ) {
        if (n1 % i == 0 && n2 % i == 0) {

             lcm1*=i;
            n1=n1/i;
            n2=n2/i;

            i=1;}
             i++;
            }
          lcm1*=n1*n2;
    i=1;
    while(i <= lcm1 && i <=n3) {
        if (lcm1 % i == 0 && n3 % i == 0) {

            lcm2*=i;
            lcm1=lcm1/i;
            n3=n3/i;

            i=1;}
            i++;
            }
          lcm2*=lcm1*n3;


    printf("%d\n", lcm2);

    return 0;
}
