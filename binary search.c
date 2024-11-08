#include <stdio.h>

int main() {
    int n, x, flag = 0, i;
    int left = 0, right, mid;
    
    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int a[n]; // Dynamic array allocation
    
    // Get the elements of the array
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Get the element to be searched
    printf("\nEnter the element to be searched: ");
    scanf("%d", &x);
    
    right = n - 1;  // Set the right boundary for binary search
    
    // Perform binary search
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (x == a[mid]) {
            flag = 1;
            break;
        } else if (x > a[mid]) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    // Output result of binary search
    if (flag == 0) {
        printf("Element not found\n");
    } else {
        printf("Element %d found at position %d\n", x, mid + 1);  // Printing position (1-indexed)
    }
    
    // Space complexity: 4 bytes for integer * 2 (left and right) + 4 bytes per element in array
    printf("\nSpace complexity: %d bytes\n", (4 * 2) + (4 * n)); 
    
    // Time complexity: O(log n) for binary search
    printf("Time complexity: O(log n)\n");
    
    return 0;
}
