#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf(" %c", &operator);  
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%d", result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use one of +, -, *, /.\n");
    }

    return 0;
}
