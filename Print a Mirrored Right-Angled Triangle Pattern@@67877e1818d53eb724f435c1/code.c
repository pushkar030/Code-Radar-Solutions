#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    for(int i=0; i<a; i++){

        //for printing spaces
        for(int j=0; j<a-i-1; j++){
            printf(" ");
        }
        for(int j=0; j<i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}