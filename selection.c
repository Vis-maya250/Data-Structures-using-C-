#include <stdio.h>

void main() {
    int n, A[100], i = 0, j = 0, small, temp, time = 0;

    time += 3;
    printf("enter the number of elements: ");
    time++;
    scanf("%d", &n);
    time++;
    printf("enter the elements: ");
    time++;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        time += 2;
    }
    
    time++;
    for (i = 0; i < n - 1; i++) {
        time++;
        small = i;
        j = i + 1;
        time += 2;
        
        while (j < n) {
            time++;
            if (A[small] > A[j]) {
                small = j;
                time += 3;
            }
            j++;
            time++;
        }
        
        time++;
        if (small != i) {
            temp = A[i];
            A[i] = A[small];
            A[small] = temp;
            time += 3;
        }
    }
    
    time++;
    printf("sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", A[i]);
        time += 2;
    }
    
    time++;
    printf("\nspace complexity = %d\n", 28 + (n * 4));
    time++;
    printf("time complexity = %d", time++);
}
