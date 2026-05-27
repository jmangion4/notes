#include <stdio.h>
#include <stdlib.h>

int imGlobal = 90;
int test(int x, int y)
{
    return x + y;
}
int main(void)
{
    int a, b;
    a = 10;
    b = 20;
    int result = test(a, b);

    int *p = (int *)malloc(sizeof(int));
    *p = 50;
    free(p);  // although we have freed the memory, the pointer p still holds the address of the freed memory, which is now a dangling pointer. Accessing *p after freeing it would lead to undefined behavior.
    p = NULL; // It's good practice to set the pointer to NULL after freeing it.
    return 0;
}