#include <stdio.h>
#include <stdlib.h>

int intcon(int *src1,int s1,int *src2,int s2,int *des){
    int f=0;
for(int i=0;i<s1;i++){
      *des=*src1;
    *des++;
    *src1++;
     f++;
}
int temp=*des;
for(int i=temp;i<temp+s2;i++){
      *des=*src2;
    *des++;
    *src2++;
     f++;
}
return f;
}
int main()
{  int s1[4]={1,3,6,7};
    int s2[3]={1,9,6};
    int d[100];
    int f=intcon(s1,4,s2,3,d);
    for(int i=0;i<f;i++){
        printf("%d\n",d[i]);
    }
}
