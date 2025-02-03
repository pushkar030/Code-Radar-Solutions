#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    printf( "You entered: %f.2f", n);
    return 0;
}

int main() {
    printf("%s", welcome());
    return 0;
}