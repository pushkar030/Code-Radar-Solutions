#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r;
    int digit;
    int ans;
    while(n){
        digit = n%10;
        r = r + digit * 10;
    }
    while(r){
        digit= r%2;
        ans = ans + digit * 10;
        r = r/2;
    }

    printf("%d"ans);

}
