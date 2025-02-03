#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    return "You entered: %f", n;
}

int main() {
    printf("%s", welcome());
    return 0;
}