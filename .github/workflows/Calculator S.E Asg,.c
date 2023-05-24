#include <stdio.h>

int main() {
    char operator;
    double num1, num2, output;

    printf("Enter an operator (/, *, +, -): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter Second Number:");
    scanf("%lf", &num2);

    switch (operator) {
        case '/':
            if (num2 != 0) {
                output = num1 / num2;
                printf("output: %.2lf\n", output);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '*':
            output = num1 * num2;
            printf("output: %.2lf\n", output);
            break;    
        case '+':
            output = num1 + num2;
            printf("output: %.2lf\n", output);
            break;
        case '-':
            output = num1 - num2;
            printf("output: %.2lf\n", output);
            break;
        
        
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
