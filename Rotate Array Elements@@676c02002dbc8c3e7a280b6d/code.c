#include<stdio.h>
#include<algorithm>
int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0; i<n+1; i++){
        int a;
        scanf("%d" , &n);
        arr[i] = a;
    }
    int i = 0;
    int j = n;
    while(i<=j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(int i =0; i<n+1; i++){
        printf("%d",arr[i]);
    }
}