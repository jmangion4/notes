#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "myheader.h"
#define MAX 2

// write a program to read records from a file and display them
// make sure that persons.dat is in the same path as the source code
int main(void)
{
    struct person personlist[MAX];                                                    // this will cause a problem because once it is full you cannot read more from file!
    struct person *betterlist = (struct person *)malloc(MAX * sizeof(struct person)); // better because it grows

    // open the file in read binary mode
    FILE *fp = fopen("persons.dat", "rb");

    if (!fp)
    {
        printf("Error reading file...");
        return -1;
    }
    else
    {
        struct person rec;
        int i = 0;
        while (fread(&rec, sizeof(rec), 1, fp))
        {

            if (i < MAX)
            {
                displayPerson(rec);
                personlist[i] = rec;
                i++;
            }
            else
            {
                printf("Cannot read anymore sorry!!");
                return -2;
            }

            // store in collection in memory
        }
        fclose(fp);
    }
}