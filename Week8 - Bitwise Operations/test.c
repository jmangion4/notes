#include <stdio.h>
#define SIZE 10
#define MULTIPLY(x,y) ((x)*(y))

int main(void) {  
    printf("The value of SIZE is %d", 10);  
    printf("The multiplication is %d", (3-1,4));
    
    int num1 = 3-1;
    int num2 = 4;
    printf("The multiplication is %d\n", MULTIPLY(num1, num2));
}
