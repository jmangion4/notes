#include <stdio.h>
 
//Write a function that accepts two integers and the funtion swaps these values
 
void swap(int a, int b){
    int temp;
    //make a copy of a first
    temp = a;
    //copy the value of b into a
    a=b;
    //copy the old value of a into b
    b=temp;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int num1 = 10, num2 = 50;
    printf("BEFORE SWAP: The value of num1 is %d and the value of num2 is %d \n", num1, num2);
    swap(&num1, &num2);
    printf("AFTER SWAP: The value of num1 is %d and the value of num2 is %d \n", num1, num2);
}
 
 // doesn't work as they stay in their original value and don't get swapped
int main(void){
 
    int num1 = 10;
    int num2 = 50;
 
    //swap the two numbers num1 and num2
    printf("BEFORE SWAP: The value of num1 is %d and the value of num2 is %d \n", num1, num2);
    swap(num1, num2);
    printf("AFTER SWAP: The value of num1 is %d and the value of num2 is %d \n", num1, num2);
 
 
}