#include <stdio.h>

int main()
{
    int num1, num2, sum, difference, product, quotient, remainder, AND, OR, XOR, NOT;

    printf("Enter two numbers \n");
    scanf("%d%d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    remainder = num1 % num2;
    AND = num1 & num2;
    OR = num1 | num2;
    XOR = num1 ^ num2;
    NOT = ~num1;

    printf("Sum of the numbers = %d\n", sum);
    printf("Difference of the numbers = %d\n", difference);
    printf("Product of the number = %d\n", product);
    printf("Product of the number = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    printf("num1 << num2 = %d\n", num1 << num2);  // shift left
    printf("num1 >> num2 = %d\n", num1 << num2);  // shift right
    printf("AND value = %d\n",AND);
    printf("OR value = %d\n",OR);
    printf("XOR value = %d\n",XOR);
    printf("NOT value = %d\n",NOT);

    return 0;
}
