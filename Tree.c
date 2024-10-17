#include <stdio.h>
int main()
{
    int limit, i, pos;
    printf("Enter the total number of nodes: ");
    scanf("%d", &limit);
    int A[limit + 1];  
    printf("Enter the node data: ");
    for (i = 1; i <= limit; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the position you want to check: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > limit)
    {
        printf("Invalid position\n");
        return 1;  
    }
    if (pos > 1)
    {
        printf("Parent of %d is: %d\n", A[pos], A[pos / 2]);
    } else
    {
        printf("No parent\n");
    }

   
    if (2 * pos > limit)
    {
        printf("No left child\n");
    }
    else
    {
        printf("Left child of %d is: %d\n", A[pos], A[2 * pos]);
    }
    if (2 * pos + 1 > limit)
    {
        printf("No right child\n");
    } else
    {
        printf("Right child of %d is: %d\n", A[pos], A[2 * pos + 1]);
    }

    return 0;  
}
