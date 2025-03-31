#include<stdio.h>
int main() {
    int n;
    scanf("%d" ,&n);

    for(int i=0; i<n; i++){
        int a;
        scanf("%d" , &a);
        arr[i] = a;
    }

    int maxi = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    printf("%d" , maxi);
}