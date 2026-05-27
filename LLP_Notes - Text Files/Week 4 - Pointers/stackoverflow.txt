#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 1000000

int main(void)
{
    int bigArray[MAX];

    srand(time(NULL)); // to help generate DIFFERENT random data after each run

    for (int i = 0; i < MAX; i++)
    {
        bigArray[i] = (int)rand();
        printf("%d", bigArray[i]);
    }
}