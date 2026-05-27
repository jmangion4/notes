#include <stdio.h>

// Write a function that adds 2 integers and returns the result
int add(int a, int b)
{
    return a + b;
}

// Write a function that accepts 2 integers and swaps their values

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1 = 5;
    int num2 = 10;
    int result = add(num1, num2);

    printf("The result of adding %d and %d is: %d\n", num1, num2, result);

    // Swap num1 and num2
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}