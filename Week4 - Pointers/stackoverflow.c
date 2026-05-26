#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 1000000 // CONSTANT
// #define MAX 1000 - THIS would work

// to overflow a program you have to know how much space your stack takes
// open integrated termianl of run#.exe
// write 'objdump -p run#.exe'
// SizeOfStackReserve      00200000 - 2MB of data 


int main(void) {

    printf("Hello");
    int bigArray[MAX];

    srand(time(NULL));
    // To generate DIFFERENT random data after each run
    for (int i=0; i < MAX; i++)
    {
        bigArray[i] = (int)rand();
        printf("%d\t", bigArray[i]);
    }

    

}