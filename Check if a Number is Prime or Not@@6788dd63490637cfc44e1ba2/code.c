#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("The number is not prime.\n");
        return 0;
    }
    int is_prime = 1;  
    for (i = 2; i <=num; i++) {
        if (num % i == 0) {
            is_prime = 0; 
            break;
        }
    }
    if (is_prime) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }
}
