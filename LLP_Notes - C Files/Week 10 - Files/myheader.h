// This is a header file that contains the definition of the person structure and the function prototypes for filling and displaying a person record. This header file can be included in multiple source files to avoid code duplication and to make the code more modular.

// SOLUTION 1
#pragma once

// SOLUTION 2
// Header file guard to prevent multiple inclusions of this header file
#ifndef MYHEADER_INCLUDED
#define MYHEADER_INCLUDED

#include <stdio.h>

struct person
{
    int personid;
    char name[20];
    char surname[20];
};

// In the header file, we only place the signatures of the functions, not their implementations. The implementations will be in the source file (myheader.c) that includes this header file.

void displayPerson(struct person p);

struct person fillPerson();

#endif
