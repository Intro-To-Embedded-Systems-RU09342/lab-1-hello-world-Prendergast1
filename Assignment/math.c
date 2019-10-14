// Author: Sean Prendergast
// Code was initially started on September 5th, 2019
// Code was last modified on October 14th, 2019
// Submitted October 17th, 2019
// Exercise: Lab 1

#ifndef MATH_C_
#define MATH_C_

/* In this program, a math function was implemented
 * to showcase its capability to perform various operations
 * including add, subtract, multiply, integer divide and modulus.
 * The function could also switch between various logical operations,
 * including bitwise AND, OR, XOR (exclusive OR) and NOT (inverse)
 * as well as shifting bits left and right.
 */

// math function to correspond with header file (math.h)
int math(int num1, int num2, char Operator)
{

    printf("Enter a number:" );
    scanf("%i %d", &num1);
    printf("\nEnter a second number:");
    scanf("%i %d", &num2);

    printf("\nSelect an operation for the two numbers: ");
    scanf("%c %d", &Operator);

    /* switch case statements are implemented
     * in place of several if statements to condense the number of
     * lines of code.
     * The switch statement allows the user to choose between different operations
     * for the two values num1 and num2.
     */

    switch(Operator)
    {
        // Case statement for performing addition
        case '+':
            return num1 + num2;
        // Case statement for performing subtraction
        case '-':
            return num1 - num2;
        // Case statement for performing multiplication
        case '*':
            return num1 * num2;
        // Case statement for performing division
        case '/':
            return num1 / num2;
        // Case statement for displaying remainder
        case '%':
            return num1 % num2;
        // Case statement for performing shift left
        case '<':
            return num1 << num2;
        // Case statement for performing shift right
        case '>':
            return num1 >> num2;
        // Case statement for performing bitwise AND
        case '&':
            return num1 & num2;
        // Case statement for performing bitwise OR
        case '|':
            return num1 | num2;
        // Case statement for performing bitwise XOR
        case '^':
            return num1 ^ num2;
        // Case statement for performing bitwise NOT
        case '~':
            return ~num1;
        // In the result of an error, the program will output "Error: Operation is invalid"
        default:
            printf("\n Error: Operation is invalid.");
    }

    return 0;
}

#endif
