#include <stdio.h>

int main() {
    int n = 100;
    int arr[99];
    int missing_target = 67; // Change this to ANY number between 1-100 to test
    
    // --- 1. AUTOMATICALLY FILLING THE ARRAY (To avoid manual input) ---
    int k = 1;
    for (int i = 0; i < 99; i++) {
        if (k == missing_target) { 
            k++; // Skip the target number
        }
        arr[i] = k;
        k++;
    }

    // --- 2. THE ACTUAL LOGIC TO FIND THE MISSING NUMBER ---
    // (This part doesn't know that 67 is missing)
    
    int sum_expected = n * (n + 1) / 2; // Formula: 100 * 101 / 2 = 5050
    
    int sum_array = 0;
    for (int i = 0; i < 99; i++) {
        sum_array += arr[i];
    }
    
    int result = sum_expected - sum_array;

    printf("We skipped: %d\n", missing_target);
    printf("The computer found the missing element: %d\n", result);

    return 0;
}