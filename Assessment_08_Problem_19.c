#include <stdio.h>
#include <stdlib.h>
int disp_LCM3(int,int,int);
int main()
{   int n1, n2,n3;
    printf("enter 3 numbers");
    scanf("%d %d %d", &n1, &n2,&n3);
    int lcm=disp_LCM3(n1,n2,n3);
    printf("%d\n", lcm);

    return 0;
}
int disp_LCM3(int n1,int n2,int n3){
    int lcm1 = 1, i, x=0, y=0,m=0,lcm2 = 1;
    for (i = 1; i <= n1 && i <=n2; i++) {
        if (n1 % i == 0 && n2 % i == 0) {

             lcm1*=i;
            n1=n1/i;
            n2=n2/i;

            i=1;}
            }
          lcm1*=n1*n2;

    for (i = 1; i <= lcm1 && i <=n3; i++) {
        if (lcm1 % i == 0 && n3 % i == 0) {

            lcm2*=i;
            lcm1=lcm1/i;
            n3=n3/i;

            i=1;}
            }
          lcm2*=lcm1*n3;

   return lcm2;


}
