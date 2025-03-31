#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];

    int oddc = 0;
    int evenc = 0;

    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }

    for(int i=0; i<n; i++){
        if(arr[i]%2 == 0){
            evenc++;
        }
        else{
            oddc++;
        }
    }
    printf("%d",evenc);
    printf("%d",oddc);
}