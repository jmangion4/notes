#include <stdio.h>
#include <stdlib.h>
 
int imGlobal = 90;
int test(int x, int y){    
    int * q =(int*)malloc(100000 * sizeof(int));
    // Don't forget to free 'q' to,as it would result in a memory leak
    // Once the function is returned, the pointer is lost but the block of memorty will stil be used
    return x+y;
}
    int main(void){  
    int a, b;    
    a=10;    
    b=20;    
    int result = test(a,b);        
 
    int* p = (int*)malloc(sizeof(int));    
    *p = 50;  
    free(p);
    // Although p still stores the old address of the block on heap, you should not dereference it
    // After a pointer is frred it is called a DANGLING pointer, which is dangerous like a wild pointer
    // It is not good programming practise to 'park' your dangling pointer and set it to NULL.
    p = NULL;
    return 0;
}