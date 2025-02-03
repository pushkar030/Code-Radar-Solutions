#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    printf( "You entered: %f", n);
   
}

int main() {
    return("%s", welcome());
    return 0;
}