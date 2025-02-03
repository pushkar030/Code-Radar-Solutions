#include <stdio.h>

char* welcome() {
    float n;
    scanf("%f", &n);
    string s = "You entered: %f", n;
    return s;
}

int main() {
    printf("%s", welcome());
    return 0;
}