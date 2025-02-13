#include<stdio.h>
int main(){
    int a,b,digit;
    scanf("%d %d", &a ,&b);
    while(b){
        digit = a % 2;
        a = a / 2;
    }
    printf("%d", digit);
}