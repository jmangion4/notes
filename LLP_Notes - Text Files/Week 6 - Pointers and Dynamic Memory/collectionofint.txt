/*
    //PART 1
    Write a program to store a set of numbers in a dynamic collection on heap.
    Ask the user the number of values to store.
    Declare the dynamic collection, numList and allocate memory to it.
    Fill up the dynamic list with random data.
    Display the data.
    //PART 2 - resize the collection
    Ask the user how many more numbers to store
    Resize the collection accordingly
    Fill up the new part
    Display

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    printf("Enter the size of the list: ");
    int n;
    int check = scanf("%5d", &n); //we place 5 to limit the number size entered to avoid numeric overflow
    if (check){
        if(n>0){
            int* numList = (int*)malloc(n * sizeof(int)); //declare and allocate memory to numList
            //int myArray[n]; note that you cannot use a variable in the size of an array, 
            //the compiler needs to know the size of the array as soon as the program runs
            if(numList){ //if numList is not NULL
                //Fill up
                srand(time(NULL));  //set seed generator)
                for (int i=0; i< n; i++){
                    numList[i] = rand()%100 + 1;  //generate a random number from 1 to 100
                }
                //display using array indexing
                for(int i=0; i<n; i++){
                    printf("%d\t", numList[i]);
                }
                //display using pointer indexing
                // for(int i=0; i<n; i++){
                //     printf("%d\t", *(numList+i));
                // }

                //********************************************************** PART 2 *********** */
                int more;
            
                printf("How many more would you like to store? ");
                scanf("%d", &more);
                int newsize = n+more;
                //resize your collection by using realloc()
                // realloc() needs to inputs: the pointer to the old list, and the new size, it returns a pointer to the
                // the new block
                //realloc() finds a new space for your block of memory, copies the old data and frees the old block //automatically
                numList = (int*)realloc(numList, newsize* sizeof(int));

                for(int i=n; i< newsize; i++){
                    numList[i] = rand()%100 + 1;
                }
                printf("\nNew List:\n");
                for(int i=0; i< newsize; i++){
                     printf("%d\t", numList[i]);
                }
                free(numList);
            }
            else {
                printf("not enough memory");
            }

        }
    }
    else {
        printf("incorrect size");
    }


}