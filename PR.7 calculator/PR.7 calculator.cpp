#include <stdio.h>

// Function prototypes
void add();
void subtract();
void multiply();
void divide();
void modulus();

int main() {
    int choice;
    
    do {
        // Display the menu
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        
        // Get the user choice
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        // Perform the chosen operation
        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                subtract();
                break;
            case 3:
                multiply();
                break;
            case 4:
                divide();
                break;
            case 5:
                modulus();
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 0);
    
    return 0;
}

void add() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

void subtract() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

void multiply() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Multiplication of %d and %d is %d\n", a, b, a * b);
}

void divide() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (b != 0) {
        printf("Division of %d and %d is %d\n", a, b, a / b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
}

void modulus() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    if (b != 0) {
        printf("Modulus of %d and %d is %d\n", a, b, a % b);
    } else {
        printf("Modulus by zero is not allowed.\n");
    }
}
