// pragma once is the easy way to make sure this header is only included once
// even if multiple files try to #include it
#pragma once

// needed for FILE* type used in the logDog function prototype
#include <stdio.h>

// struct definition - defines what one dog record looks like in memory
// this matches exactly how the data is stored in dogData.bin
struct dog {
    char chipId[15];  // 15 characters for the chip ID
    char name[30];    // 30 characters for the name
    char breed[30];   // 30 characters for the breed
};

// function prototypes - these tell the compiler what functions exist
// and what they take/return, without the actual code body
// the full code is in dogheader.c
void displayDog(struct dog d);             // prints dog details to screen
void logDog(struct dog d, FILE* logFile);  // writes dog details to log file