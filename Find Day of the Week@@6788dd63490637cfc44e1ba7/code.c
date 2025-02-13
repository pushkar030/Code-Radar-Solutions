// #include <stdio.h>
// int main() {
//     int a;
//     char* arr[7] = {"Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday","Sunday"};
//     scanf("%d",&a);
//     printf("%s\n",arr[a+1]);
// }

#include <stdio.h>

int main() {
    int a;
    // Corrected the array to store string literals as pointers to char
    char* arr[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    
    // Take input from the user
    scanf("%d", &a);
    
    // Check if input is within valid range
    if (a >= 0 && a < 7) {
        // Print the corresponding day
        printf("%s\n", arr[a]);
    } else {
        // Handle invalid input
        printf("Invalid input! Please enter a number between 0 and 6.\n");
    }

    return 0;
}
