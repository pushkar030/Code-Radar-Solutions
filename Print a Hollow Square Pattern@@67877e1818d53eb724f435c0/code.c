#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Print stars on the borders, else print spaces
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
