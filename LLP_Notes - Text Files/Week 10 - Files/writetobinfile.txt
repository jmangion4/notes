#include <stdio.h>
#include <string.h>
#define MAX 3

struct person
{
    int personid;
    char name[20];
    char surname[20];
};

void displayPerson(struct person p)
{
    printf("PersonId: %d \n", p.personid);
    printf("Name: %s \n", p.name);
    printf("Surname: %s \n", p.surname);
    printf("\n");
}

int main(void)
{
    struct person p1 = {100, "John", "Doe"};
    struct person p2 = {200, "Lionel", "Messi"};
    struct person p3 = {300, "Max", "Shah"};

    struct person personList[MAX] = {p1, p2, p3};

    for (int i = 0; i < MAX; i++)
    {
        displayPerson(personList[i]);
    }

    // Write the records to a binary file called "people.dat"
    // Step 1 - Open the file for writing in binary mode

    // fopen() accepts two parameters: the name of the file and the mode in which to open the file. The mode "wb" stands for "write binary", which means that the file will be opened for writing and that the data will be written in binary format. If the file does not exist, it will be created. If the file already exists, its contents will be truncated (i.e., deleted) before writing new data to it. The function returns a pointer to a FILE object that can be used to access the file. If the file cannot be opened, it returns NULL. Therefore, it is important to check if the file was opened successfully before attempting to write to it, as shown in the code snippet below.

    FILE *file = fopen("people.dat", "wb");
    if (!file)
    {
        printf("Error opening file!\n");
        return -1; // exit the program with a non-zero status to indicate an error
    }

    // Step 2 - Write each record to the file
    for (int i = 0; i < MAX; i++)
    {
        // Parameters: pointer to the data, size of each element, number of elements, file pointer.
        // Returns the number of elements successfully written, which should be 1 in this case. If it returns a value less than 1, it indicates an error occurred during writing.
        if (fwrite(&personList[i], sizeof(personList[i]), 1, file) != 1)
        {
            printf("Error writing to file!\n");
            fclose(file);
            return -1;
        }
    }

    // Step 3 - Close the file
    fclose(file);

    return 0;
}