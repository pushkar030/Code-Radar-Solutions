#include <stdio.h>
int main() {
    int a;
    char* arr[7] = {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    scanf("%d",&a);
    printf("%s",arr[a+1]);
}