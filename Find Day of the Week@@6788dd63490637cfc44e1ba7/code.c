#include <stdio.h>
int main() {
    int a;
    char* arr[7] = {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
    scanf("%d",&a);
    if(a>=1 && a<=7){
        printf("%s\n",arr[a-1]);
    }
    else{
        printf("Invalid");
    }
    
}

