#include <stdio.h>

int add(double a, double b);
int subtract(double a, double b);
int multiply(double a, double b);
int divide(double a, double b);
int modulus(int a, int b);

int main() {
    char choice;
    int int1, int2;
    double num1, num2;

    do {
       
        printf("\nArithmetic Operations Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        int menuChoice;
        scanf("%d", &menuChoice);

        switch (menuChoice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                add(num1, num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                subtract(num1, num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                multiply(num1, num2);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0)
                    divide(num1, num2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case 5:
                printf("Enter two integers: ");
                scanf("%d %d", &int1, &int2);
                if (int2 != 0)
                    modulus(int1, int2);
                else
                    printf("Error: Division by zero is not allowed.\n");
                break;
            case 6:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }

       
        printf("\nDo you want to perform another operation? (Press 'q' to quit or any other key to continue): ");
        scanf(" %c", &choice); 
    } while (choice != 'q' && choice != 'Q'); 

    return 0;
}


int add(double a, double b) {
    printf("Result: %.2lf\n", a + b);
}

int subtract(double a, double b) {
    printf("Result: %.2lf\n", a - b);
}

int multiply(double a, double b) {
    printf("Result: %.2lf\n", a * b);
}

int divide(double a, double b) {
    printf("Result: %.2lf\n", a / b);
}

int modulus(int a, int b) {
    printf("Result: %d\n", a % b);
}