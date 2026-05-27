#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 1000000

int main(void)
{
    int *bigList = (int *)malloc(MAX * sizeof(int));
    //* means that we are going to deal with pointers
    // bisList is a pointer that stores address of the allocated space in heap

    if (bigList) // biglist != NULL, means malloc was successful
    {
        srand(time(NULL)); // to help generate DIFFERENT random data after each run

        for (int i = 0; i < MAX; i++)
        {
            bigList[i] = (int)rand();
            printf("%d", bigList[i]);
        }
    }
    free(bigList);
}