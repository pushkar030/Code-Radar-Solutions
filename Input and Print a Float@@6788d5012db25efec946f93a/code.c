#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    return n;
   
}

int main() {
    printf("%s", welcome());
    return 0;
}