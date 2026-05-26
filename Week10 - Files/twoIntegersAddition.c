#include <stdio.h>
 
//Write a function that accepts two integers and returns the addition
 
int add(int a, int b){
    return a+b;
}
 
 
 
int main(void){
 
    int num1 = 10;
    int num2 = 50;
    int result = add(num1, num2);
 
    printf("The addition of %d and %d is %d \n", num1, num2, result);
 
}