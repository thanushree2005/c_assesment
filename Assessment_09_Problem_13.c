#include <stdio.h>

int main() {
    int n,c= 0,a[100];
    while (1) {
        scanf("%d", &n);
        if (n == 0)
        break;
        a[c] = n;
        c++;
    }

if (a[0] == a[c-1]) {
        printf("Success");
        }
else {
        printf("Failure");}


    return 0;
}
