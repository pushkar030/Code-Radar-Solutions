#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d",&b);

    if(a&b > 0){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}