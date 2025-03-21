#include<stdio.h>
int main() {
    bool ab = True;
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<=n; i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            ab = False;
        }
    }
    printf("%s" , ab);
}