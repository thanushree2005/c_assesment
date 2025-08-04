#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    int temp=num;
    int i=0;
    while(temp>0){
       i++;
       temp=temp/10;
    }
    int x=(pow(10,i-1));
    //printf("%d\n",x);
    //printf("%d",(x*(num/x)));
    printf("%d",((num%10)%2==0)?num:(num-(x*(num/x)))+x*((num/x)-1));
    return 0;
}
