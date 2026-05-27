#include <stdio.h>
#include "dogheader.h"

// displays one dog's details to the screen
void displayDog(struct dog d) {
    printf("Chip ID : %s\n", d.chipId);
    printf("Name    : %s\n", d.name);
    printf("Breed   : %s\n\n", d.breed);
}

// writes one dog's details to the log file
// fprintf works like printf but writes to a file instead of the screen
void logDog(struct dog d, FILE* logFile) {
    fprintf(logFile, "Chip ID : %s\n", d.chipId);
    fprintf(logFile, "Name    : %s\n", d.name);
    fprintf(logFile, "Breed   : %s\n\n", d.breed);
}