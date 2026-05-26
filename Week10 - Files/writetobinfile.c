#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 3

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

int main(void) {
    struct person p1 = {100, "Gigi", "Gatt"};
    struct person p2 = {200, "Anna", "Borg"};
    struct person p3 = {300, "Gary", "Cassar"};

    struct person personlist[MAX];
    personlist[0] = p1;
    personlist[1] = p2;
    personlist[2] = p3;

    // Display Data
    for(int i=0; i < MAX; i++)
    {
        displayPerson(personlist[i]);
    }

    // write the records to a binary file called person.dat
    
    // Step 1 - Open the file in write mode binary
    
    /*
    fopen(filename+path, mode) accepts two inputs
    - the filename (and path) of the file to write to
    - the mode - 'wb' means 'write binary'
    
    fopen() returns a pointer to the file is successfull or NULL otherwise
    IMP - always check for NULL before using file
    When you open in write mode, if the file does not exist fopen() will create it
    If the file already exists, all data will be overwritte
    */
    
    FILE* fp = fopen("persons.dat", "wb");
    if (!fp) // fp is 0 = didn't work
    {
        printf("Error using file... goodbye");
        return -1;
    }
    else 
    {
        for(int i=0; i < MAX; i++)
        {
            struct person rec = personlist[i];
        
            /*
            fwrite() - accepts 4 parameters
            fwrite - (&rec, sizeof(rec), 1, fp)
              &rec  - the address of the data to be written to file
              sizeof(rec) - the size in BYTES this data will be allocated on disk (this is usually same as size of data) 
              1 - the amount of times you would like your data to be written (usually 1)
              fp - the POINTER 
            fwrite() --> returns the number of elements written if successful otherwise 0
              */
            
            int check = fwrite(&rec, sizeof(rec), 1, fp);
            if(check)
            {
                printf("Record with id %d was written to file\n", rec.personid);
            }
        }   
        fclose(fp); 
        // VERY IMP to always close the file when ready to make sure that ALL data is sent to files
        // and to prepare for the next process
    }



}