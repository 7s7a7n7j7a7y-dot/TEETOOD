#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Prompt the user to enter two integers
    printf("Enter two integers: ");

    // Read input from the user
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Display the result
    printf("Sum: %d", sum);

    return 0;
}
