#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 3

// Define a new truct type to store details about a person
struct person
{
    int personid;
    char name[20];
    char surname[20];
};

// Declare a function which fills in a struct person at runtime and returns it
struct person fillPerson()
{
    struct person p;
    printf("Enter details for one person \n");
    printf("PersonId: ");
    int check = scanf("%d", &p.personid);
    printf("Name: ");
    scanf("%s", p.name);
    printf("Surname: ");
    scanf("%s", p.surname);
    return p;
}

void displayPerson(struct person p)
{
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);
}

int main(void)
{
    // Declare a dynamic collection of 3 person records on heap
    struct person *listptr = (struct person *)malloc(MAX * sizeof(struct person));

    // Why was a pointer used? Wouldn't a normal array work? Why not?
    // A normal array would work but it would be allocated on the stack and would be destroyed once the function ends. Using a pointer allows us to allocate memory on the heap, which persists until we explicitly free it.

    for (int i = 0; i < MAX; i++)
    {
        listptr[i] = fillPerson();
    }

    for (int i = 0; i < MAX; i++)
    {
        displayPerson(listptr[i]);
    }

    // Add space for 2 more person records
    listptr = (struct person *)realloc(listptr, (MAX + 2) * sizeof(struct person));

    // Fill in the new records
    for (int i = MAX; i < MAX + 2; i++)
    {
        listptr[i] = fillPerson();
    }

    // Display all records
    for (int i = 0; i < MAX + 2; i++)
    {
        displayPerson(listptr[i]);
    }

    // Free the memory allocated on heap
    free(listptr);

    return 0;
}