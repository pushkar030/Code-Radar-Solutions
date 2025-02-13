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
        int b = a -1;
        // Print the corresponding day
        printf("%s\n", arr[b]);
    } else {
        // Handle invalid input
        printf("Invalid");
    }

    return 0;
}
