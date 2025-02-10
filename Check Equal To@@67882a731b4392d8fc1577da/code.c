#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    return 0;
}#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);

    int b;
    scanf("%d",&b);

    if(a==b){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}