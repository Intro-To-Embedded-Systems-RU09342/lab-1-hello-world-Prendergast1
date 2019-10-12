/*
 * math.c
 *
 * Author: Sean Prendergast
 */

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
        case '<<':
            return num1 << num2;
        // Case statement for performing shift right
        case '>>':
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
        // In the result of an error, the default argument will simply return the value of num1
        default:
            return num1;
    }

}

#endif /* MATH_C_ */
