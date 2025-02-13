#include <stdio.h>
#include<array>
int main() {
    int a;
    int arr[7] = {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    scanf("%d",&a);
    printf(arr[a+1]);
}