#include <stdio.h>

// Function to add two floats
float add(float a, float b) {
    // Perform addition
    return a + b;
}

// Function to subtract two floats
float subtract(float a, float b) {
    // Perform subtraction
    return a - b;
}

// Function to multiply two floats
float multiply(float a, float b) {
    // Perform multiplication
    return a * b;
}

// Function to divide two floats
float divide(float a, float b) {
    // Perform division (no zero check for now)
    return a / b;
}

int main() {
    // Array of pointers to functions taking two floats and returning float
    float (*op_funcs[4])(float, float) = {add, subtract, multiply, divide};

    int op; // To store operation code (1-based for user)
    float x, y; // To store input operands

    // Ask user for operation code
    printf("Enter operation:\n1 for add\n2 for subtract\n3 for multiply\n4 for divide\n");
    scanf("%d", &op); // Read user operation

    // Check for valid operation code (should be 1-4)
    if (op < 1 || op > 4) {
        printf("Invalid operation selected.\n");
        return 1; // Exit with error code
    }

    // Ask user for numbers
    printf("Enter first number: ");
    scanf("%f", &x); // Read first number

    printf("Enter second number: ");
    scanf("%f", &y); // Read second number

    // For divide, check for divide by zero
    if (op == 4 && y == 0) {
        printf("Cannot divide by zero.\n");
        return 1; // Exit with error code
    }

    // Call the appropriate function using function pointers
    float result = op_funcs[op - 1](x, y); // -1 to change from 1-based to 0-based

    // Print the result rounded to two decimal places
    printf("Result: %.2f\n", result);

    return 0; // Exit (success)
}