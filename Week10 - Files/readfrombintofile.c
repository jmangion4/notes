#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 2

//Define a new struct type to store details about a person
struct person {
    int personid;
    char name[20];
    char surname[20];
};
 
void displayPerson(struct person p){
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n\n", p.surname);
}
 
 
// Write a program to READ Recrords from a file and DISPLAY them
// make sure that persons.dat is in the same path as the source code
int main(void)
{
    struct person personlist[MAX];
    // this is a problem becuase once its full, you cannot read more from file!
    // we used a WHILE loop below

    struct person* betterlist = (struct person*)malloc(MAX * sizeof(struct person));
    // Better, because it GROWS
    // therefor we have to know how many records we have

    // open the file in read binary mode
    FILE* fp = fopen("persons.dat", "rb");

    if(!fp)
    {
        printf("Error reading file...");
        return -1;
    }
    else
    {
        // We use a WHILE loop and NOT a FOR loop because we will not always know
        // how much elements we have in a file.
        struct person rec;
        int i=0;

        while (fread(&rec , sizeof(rec), 1, fp))
        {
            if (i<MAX)
            {
                displayPerson(rec);
                personlist[i] = rec;
                i++;

            }else
            {
                printf("Cannot read anymore sorry!!");
                break;
            }
            // store in collection in memory

        }

    }
 
}