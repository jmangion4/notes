#include <stdio.h>
#include <stdlib.h>
#include "dogheader.h"
//to create exe gcc main.c dogheader.c -o dogs.exe
//to run ./dogs.exe

int main(void) {

    // open dogData.bin in read binary mode
    FILE* fp = fopen("dogData.bin", "rb");
    if (!fp) {
        printf("Error opening dogData.bin\n");
        return -1;
    }

    // create/open mylog.txt in write mode to log useful info
    FILE* logFile = fopen("mylog.txt", "w");
    if (!logFile) {
        printf("Error opening mylog.txt\n");
        fclose(fp);
        return -1;
    }

    struct dog rec;   // temporary variable to hold one record at a time
    int count = 0;    // keeps track of how many records we have read
    int capacity = 1; // start with space for 1 dog

    // allocate initial memory for 1 dog
    struct dog* dogs = malloc(capacity * sizeof(struct dog));

    // fread reads one record at a time from the file
    // it returns 0 when there are no more records (end of file)
    // so the while loop stops automatically when the file is fully read
    while (fread(&rec, sizeof(rec), 1, fp)) {

        // if the array is full, double the capacity
        // doubling is more efficient than adding 1 each time
        // because realloc is called much less often (1, 2, 4, 8...)
        if (count == capacity) {
            capacity = capacity * 2;
            dogs = realloc(dogs, capacity * sizeof(struct dog));
        }

        // store the record we just read into the array
        dogs[count] = rec;
        count++;  // increment count ready for the next record
    }

    // log how many records were found in the file
    fprintf(logFile, "Records found: %d\n\n", count);

    // loop through all dogs in memory and display + log each one
    for (int i = 0; i < count; i++) {
        displayDog(dogs[i]);       // print to screen
        logDog(dogs[i], logFile);  // write to mylog.txt
    }

    // free the dynamically allocated memory - very important!
    free(dogs);

    // close both files - very important to avoid losing data
    fclose(fp);
    fclose(logFile);

    printf("Done! Check mylog.txt\n");
    return 0;
}