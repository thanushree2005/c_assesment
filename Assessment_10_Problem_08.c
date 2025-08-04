#include <stdio.h>

int main() {
    char c[51];
    scanf("%s", c);
    int i = 0, v = 1;
    while (c[i] != '\0') {
        if (c[i] < 48 || c[i] > 57) {
            v = 0; break;
        }i++;
    }

if(v)
    printf("Valid");
else
    printf("Invalid");

    return 0;
}
