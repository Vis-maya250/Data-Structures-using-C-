#include <stdio.h>
#include <stdlib.h>


struct Node {
    int coeff;
    int pow;
    struct Node* next;
};


struct Node* createNode(int coeff, int pow) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of a linked list
void insertNode(struct Node** poly, int coeff, int pow) {
    struct Node* newNode = createNode(coeff, pow);
    if (*poly == NULL) {
        *poly = newNode;
        return;
    }
    struct Node* temp = *poly;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to display a polynomial
void displayPoly(struct Node* poly) {
    while (poly != NULL) {
        printf("%dx^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

// Function to add two polynomials
struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    
    // Traverse both polynomials
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow > poly2->pow) {
            insertNode(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow) {
            insertNode(&result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        }
        else {
            insertNode(&result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    
    // If poly1 has remaining terms
    while (poly1 != NULL) {
        insertNode(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }
    
    // If poly2 has remaining terms
    while (poly2 != NULL) {
        insertNode(&result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }
    
    return result;
}

int main() {
    struct Node *poly1 = NULL, *poly2 = NULL;
    int n, coeff, pow, i;
    
    // Input for the first polynomial
    printf("Enter the number of terms in the first polynomial: ");
    scanf("%d", &n);
    
    printf("Enter the terms for the first polynomial (coeff and power):\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &pow);
        insertNode(&poly1, coeff, pow);
    }
    
    // Input for the second polynomial
    printf("Enter the number of terms in the second polynomial: ");
    scanf("%d", &n);
    
    printf("Enter the terms for the second polynomial (coeff and power):\n");
    for (i = 0; i < n; i++) {
        scanf("%d %d", &coeff, &pow);
        insertNode(&poly2, coeff, pow);
    }
    
    // Display the input polynomials
    printf("First Polynomial: ");
    displayPoly(poly1);
    
    printf("Second Polynomial: ");
    displayPoly(poly2);
    
    // Adding polynomials
    struct Node* sum = addPolynomials(poly1, poly2);
    
    printf("Sum of Polynomials: ");
    displayPoly(sum);
    
    return 0;
}
