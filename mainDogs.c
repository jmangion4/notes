#include <stdio.h>

struct dog {
	char chipId[15];
	char name[30];
	char breed[30];
 
};

int writemessage(char* filename, char* msg){
    FILE* fp = fopen(filename, "a");
    if(!fp){
        return 0;
    } else {
        fprintf(fp, msg);
        fprintf(fp, "\n");
        fclose(fp);
        return 1;
    }
}
 
int main(void){
 
    //writemessage("mylogs.txt", "Hello");
    
    // Declare the data Structure
    int n = 2;
    struct dog* dogList = (struct dog*)malloc(n * sizeof(struct dog));  
    
    int count = 0;

    FILE * fp = fopen("dogData.bin", "rb");
    if(!fp)
    {
        writemessage("mylog.txt", "error using FIle");
    }
    else {
        // declare and allocate mem to the dynamic collection of struct dog
        struct dog dog;
        int count = 0;
        while(fread(&dog, sizeof(dog), 1, fp))
        {
            printf("ChipId: %d\n", dog.chipId);
            printf("Name: %s\n", dog.name);
            printf("Breed: %s\n", dog.breed);
            writemessage("mylog.txt", "One record read");
            // Check the value of count, if count == n then DOUBLE the value of n and resize
            // store at the next free location

            if(count == n)
            {
                //resize list
                n = 2*n;
                dogList = (struct dog*)realloc(dogList, n* sizeof(struct dog));
                // Ideally you should check if realloc succeeded or not, in which case program stops or break out of loop with an error code
                writemessage("mylog.txt", "List size Doubled");
            
            }

            // Store the dog record at the current position
            dogList[count] = dog;
            writemessage("mylog.txt", "One record stored");
            count++;
        }

    }


}