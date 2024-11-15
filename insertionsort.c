#include<stdio.h>

void main() {
    int i, j, n, temp, time = 0, space;
    time++;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    time += 2;
    int A[n];
    
    printf("Enter the elements:\n");
    time++;
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &A[i]);
        time += 3;
    }
    
    time++;
    for(i = 1; i < n; i++) {
        temp = A[i];
        j = i - 1;
        time += 3;
        while(j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            time += 2;
            j--;
        }
        time++;
        A[j + 1] = temp;
        time++;
    }
    
    time++;
    printf("Sorted array is:\n");
    time++;
    for(i = 0; i < n; i++) {
        time++;
        printf("%d\t", A[i]);
        time++;
    }
    time++;
    
    printf("\nSpace complexity = %d\n", 24 + (n * 4));
    time++;
    printf("Time complexity = %d\n", time + 1);
}
