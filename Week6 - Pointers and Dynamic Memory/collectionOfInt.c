#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*

    Write a program to
    - store a set of numbers in a dynamic collection called heap.
    - Ask the user the number of values to store
    - Declare the dynamic collection numList and allocate memory to it.
    - Fill up the dynamic list with random data
    - Display the data

    Part 2
    - Resize the collection
    - Ask the user how many more numbers to store
    - Resize the collection accordingly
    - Fill up the new part Display

*/

int main(void)
{
    printf("Enter the size of the list: ");

    int n;
    int check = scanf("%5d", &n);
    // Only the first 5 digitis will be grabbed 
    if (check)
    {
        if (n > 0)
        {
            int * numList = (int*)malloc(n * sizeof(int));
            // declare and allocate memory to numList
            // int myArray[n]; 
            // Note: you cannot use a variable in the size of an array,
            // the compiler needs to know the size of an array as soon as the program runs
            
            // Fillup
            if (numList) {
                srand(time(NULL)); // set seed (generator)
                for (int i=0; i<n; i++)
                {
                    numList[i] = rand()%100 + 1; 
                    // generate a random number from 1 to 100
                }

                // display using array indexing
                for (int i=0; i<n; i++)
                {
                    printf("%d\t", numList[i]);
                }
                
                // display using pointer indexing
                //for (int i=0; i<n; i++)
                //{
                //    printf("%d\t", *(numList+i));
                //}

                // *************** PART 2 ******************

                int more;
                
                printf("How many more would you like to store? ");
                scanf("%d", &more);
                int newSize = n+more;
                // Resize your collection by using realloc()
                // Realloc() Needs to input:
                // - the pointer to the old list
                // - and the NEW SIZE,
                // - It retuns a pointer to the new block
                // realloc() Finds a new space for your block or memory, 
                // Copies the old data and frees the old block AUTOMATICALLY
                numList =(int*)realloc(numList, newSize* sizeof(int));


                for (int i = n; i< newSize; i++)
                {
                    numList[i] = rand()%100 + 1;
                }
                printf("\n New List:");
                for(int i=0; i< newSize; i++)
                {
                    printf("%d\t", numList[i]);
                }
                // ALWAYS
                free(numList);
            }

            else {
                printf("Not Enough Memory");
            }
        }
    }
    else {
        printf("incorrect size");
    }


}