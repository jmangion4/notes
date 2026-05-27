#include <stdio.h>
#include <stdlib.h>

/*
 * ADVANTAGE of dynamic list of static structs over array of structs:
 * The size of the list is decided at runtime using malloc(), so memory
 * is only allocated for the exact number of records needed. An array
 * of structs requires the size to be fixed at compile time, which may
 * waste memory if too large or be insufficient if too small. The dynamic
 * list can also be resized at runtime using realloc() if more space is needed.
 *
 * DISADVANTAGE of dynamic list of static structs over array of structs:
 * The programmer is responsible for manually managing memory (malloc and free).
 * This increases code complexity and risks memory leaks if free() is forgotten.
 * An array of structs is simpler — memory is managed automatically by the compiler
 */

struct dog
{
    char chipId[15];
    char name[30];
    char breed[30];
};

struct dog fillRecord()
{
    struct dog d;

    printf("Enter the chipId (14 char max): ");
    scanf("%14s", d.chipId);

    printf("Enter the name (29 char max): ");
    scanf("%29s", d.name);

    printf("Enter the breed (29 char max): ");
    scanf("%29s", d.breed);

    printf("\n");

    return d;
}

void displayRecord(struct dog d)
{
    printf("ChipId: %s\n", d.chipId);
    printf("Name: %s\n", d.name);
    printf("Breed: %s\n\n", d.breed);
}

int main(void)
{
    int n = 3;
    struct dog *dogList = (struct dog *)malloc(n * sizeof(struct dog));

    FILE *file = fopen("dogData.bin", "wb");

    if (!file)
    {
        printf("Error Opening File.");
        free(dogList);
        return -1;
    }

    for (int i = 0; i < n; i++)
    {
        dogList[i] = fillRecord();
        fwrite(&dogList[i], sizeof(struct dog), 1, file);
    }

    fclose(file);

    printf("Name: Max\n");
    for (int i = 0; i < n; i++)
    {
        displayRecord(dogList[i]);
    }

    free(dogList);
    return 0;
}