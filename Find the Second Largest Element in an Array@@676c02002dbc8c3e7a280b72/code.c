#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int arr[n];


    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        arr[i] = a;
    }
    int maxi = arr[0];
    int maxi2 = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>maxi){
            maxi2 = maxi;
            maxi = arr[i];
        }
        else if(arr[i]<maxi && arr[i]>maxi2){
            maxi2 = arr[i];
        }

    }
    if(maxi2 == maxi){
        printf("-1");
    }
    else{
        printf("%d", maxi2);
    }
    
}