#include <stdio.h>

// Variables a and b are called INPUT Parameters
void badSwap(int a, int b)
{
    int temp = a; // make a copy of value 'a'
    a = b;  // copy the value of b
    b = temp; // copy the old value of a
    // DOENST WORK.
    
}

void goodSwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {

    int x = 10;
    int y = 20;

    printf("BEFROE SWAP X: %d       Y: %d\n", x,y);
    badSwap(x,y); 
    // This is a CALL BY VALUE, A copy od the value of x is sent to the 
    // corresponding input parameter (a)
    // Any changes that happen to a Will NOT affect a.
    printf("BEFROE SWAP X: %d       Y: %d\n", x,y);
    goodSwap(&x, &y);
    printf("AFTER GOOD SWAP X: %d       Y: %d\n", x,y);

    

}