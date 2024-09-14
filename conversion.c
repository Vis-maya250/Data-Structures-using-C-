#include <stdio.h>
#include <ctype.h> 
#define MAX 10

char stack[MAX];
int top = -1;

void push(char c) {
    if (top < MAX - 1) {
        top++;
        stack[top] = c;
    } else {
        printf("Stack overflow\n");
    }
}

char pop() {
    if (top >= 0) {
        char op = stack[top];
        top--;
        return op;
    } else {
        printf("Stack underflow\n");
        return -1;
    }
}

int priority(char optr) {
    switch (optr) {
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int main() {
    char exp[20], optr;
    int i;
    
    printf("Enter the infix expression: ");
    fgets(exp, sizeof(exp), stdin);

    printf("Postfix Expression: ");
    
    for (i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == ' ' || exp[i] == '\n') {
            continue; 
        } else if (exp[i] == '(') {
            push(exp[i]);
        } else if (isalpha(exp[i])) {
            printf("%c", exp[i]);
        } else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/') {
            while (top != -1 && stack[top] != '(' && priority(stack[top]) >= priority(exp[i])) {
                optr = pop();
                printf("%c", optr);
            }
            push(exp[i]);
        } else if (exp[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                optr = pop();
                printf("%c", optr);
            }
            if (top != -1 && stack[top] == '(') {
                pop(); 
            }
        }
    }

    while (top != -1) {
        optr = pop();
        printf("%c", optr);
    }

    printf("\n");
    return 0;
}
