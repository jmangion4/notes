#include <stdio.h>
#include <limits.h>

int main() {
    int x = INT_MAX; // The largest possible value for an int
    printf("Before: %d\n", x);
    printf("After:  %d\n", x + 1); // Overflows to the minimum possible value by adding 1 to the maximum value
    return 0;
}
