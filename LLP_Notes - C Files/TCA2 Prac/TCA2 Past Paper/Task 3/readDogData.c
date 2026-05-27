#include <stdio.h>
#include <stdlib.h>

struct dog
{
    char chipId[15];
    char name[30];
    char breed[30];
};

int logToFile(char *filename, char *msg)
{
    FILE *file = fopen(filename, "a");

    if (!file)
    {
        printf("Error opening file!\n");
        return -1;
    }

    fprintf(file, msg);
    fprintf(file, "\n");
    fclose(file);
    return 0;
}

int main(void)
{
    int listSize = 10;
    struct dog *dogList = (struct dog *)malloc(listSize * sizeof(struct dog));

    FILE *file = fopen("dogData.bin", "rb");

    if (!file)
    {
        printf("Error opening file!\n");
        logToFile("logs.txt", "Error opening file");
        free(dogList);
        return -1;
    }

    struct dog d;
    int count = 0;

    while (fread(&d, sizeof(d), 1, file) == 1)
    {
        if (count == listSize)
        {
            listSize = listSize * 2;
            dogList = (struct dog *)realloc(dogList, listSize * sizeof(struct dog));
        }
        dogList[count] = d;
        count++;
    }
    logToFile("logs.txt", "Dogs read and stored in memory.");
    fclose(file);

    for (int i = 0; i < count; i++)
    {
        printf("Dog %d\nChipId: %s\nBreed: %s\nName: %s\n\n", i + 1, dogList[i].chipId, dogList[i].breed, dogList[i].name);
    }

    free(dogList);
    return 0;
}