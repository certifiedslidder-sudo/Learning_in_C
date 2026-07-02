/*
given an array containing elements from 1 to 100 except one element in this range is missing. find the missing element*/

// CONCEPT : LINEAR SEARCH
    // (Filling the array for demonstration: let's say 42 is missing)
  #include <stdio.h>

int main() {
    // 1. Suppose we have an array of 99 elements (1 to 100, but one is missing)
    int arr[99];
    
    // (Filling the array for demonstration: let's say 42 is missing)
    int k = 1;
    for (int i = 0; i < 99; i++) {
        if (k == 42) k++; // Skip 42
        arr[i] = k;
        k++;
    }

    // 2. Calculate the sum of all elements present in the array
    int sum_array = 0;
    for (int i = 0; i <= 98; i++) {
        sum_array += arr[i];
    }

    // 3. Calculate the sum of first 100 natural numbers using formula: n*(n+1)/2
    int n = 100;
    int sum_expected = n * (n + 1) / 2;

    // 4. The difference is the missing number
    int missing_element = sum_expected - sum_array;

    printf("The missing element is: %d\n", missing_element);

    return 0;
}