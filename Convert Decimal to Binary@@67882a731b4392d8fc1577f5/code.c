#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int r = 0;       // Initialize reverse variable
    int digit;
    int ans = 0;     // Initialize the answer variable

    // Reverse the number
    while (n) {
        digit = n % 10;
        r = r * 10 + digit;  // Corrected reversal logic
        n = n / 10;
    }

    // Convert reversed number to binary
    while (r) {
        digit = r % 2;  // Get remainder (binary digit)
        ans = ans * 10 + digit;  // Build binary number
        r = r / 2;
    }

    // Print the binary equivalent (reverse of binary digits)
    printf("%d", ans);

    return 0;
}
