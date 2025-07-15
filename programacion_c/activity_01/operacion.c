#include <stdio.h>

float operacion(int oper, float a, float b) {
    float sum, res, mult, div;
    switch (oper) {
        case 1:
            sum = a + b;           // sum
            return sum;
        case 2:
            res = a - b;           // subtract
            return res;
        case 3:
            mult = a * b;          // multiply
            return mult;
        case 4:
            div = a / b;           // divide
            return div;
    }
}

int main() {
    int op;         // To store operation choice
    float x, y;     // To store the numbers
    printf("Enter operation:\n1 for add\n2 for subtract\n3 for multiply\n4 for divide\n");
    scanf("%d", &op);                  // Read operation from user

    printf("Enter first number: ");     
    scanf("%f", &x);                   // Read first number
    printf("Enter second number: ");
    scanf("%f", &y);                   // Read second number

    float result = operacion(op, x, y); // Call the function
    printf("Result: %.2f\n", result);   // Print the result

    return 0;
}


