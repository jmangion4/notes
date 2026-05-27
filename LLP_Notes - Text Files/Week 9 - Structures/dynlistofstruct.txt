#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 3

struct person
{
    int personid;
    char name[20];
    char surname[20];
};

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
    // Declare a dynamic list of 3 dynamic person records
    // This is the most memory efficient way to store a collection of records as we only allocate the memory we need and we can easily resize it if needed. We can also easily pass the pointer to the collection to functions without worrying about the size of the collection.
    // It also allows us to easily add or remove records from the collection without having to worry about the size of the collection.

    // Step 1: Declare your dynamic collection of person records on heap
    struct person **listptr = (struct person **)malloc(MAX * sizeof(struct person *));

    // Step 2: REMEMBER to allocate memory for each record in the collection
    for (int i = 0; i < MAX; i++)
    {
        listptr[i] = (struct person *)malloc(sizeof(struct person));
    }
}