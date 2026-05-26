#include <stdio.h>

void test(int num)
{
    // if (num > 10) return; // <- base case!
    // To stop it

    printf("Recursion: %d\n", ++num);
    test(num);
    // no exit condition (no if to stop recursion)
}

 // Causes infinite recursion (also called runaway recursion)
 // which eventually creashes the program because of stack overflow
  
int main(void)
{
    // starts recursion process#
    //  call to test uses more stack memory (because each call 
    //is stored in the call stack until it finishes) - causing stack overflow.
    test(1);
}
// Always include a condition to stop recursion (a base case),