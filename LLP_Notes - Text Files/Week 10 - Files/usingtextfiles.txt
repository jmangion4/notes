#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mytext.txt", "a"); // open the file in append mode, if it doesn't exist it will be created

    if (!fp)
    {
        printf("Error opening file...");
        return -1;
    }

    fprintf(fp, "This is a line of text.\n");

    int num = 10;
    fprintf(fp, "The number is: %d\n", num);

    fputs("This is another line of text.\n", fp);

    // fputs vs fprintf: fputs is used to write a string to a file, while fprintf is used to write formatted data to a file. fputs does not support formatting, it simply writes the string as it is, while fprintf allows you to format the output using format specifiers.

    fclose(fp);

    // Read from the text file
    fp = fopen("mytext.txt", "r"); // open the file in read mode

    if (!fp)
    {
        printf("Error opening file...");
        return -1;
    }

    // We do not know how many lines are in the file, so we will read the file line by line until we reach the end of the file. We can use fgets to read a line of text from the file and store it in a buffer.

    char buffer[500]; // buffer to store the line of text

    while (fgets(buffer, sizeof(buffer), fp)) // if it reaches the end of the file, fgets will return NULL and the loop will terminate // using sizeof(buffer) or sizeof(buffer)-1? We should use sizeof(buffer) because fgets will read at most sizeof(buffer)-1 characters and then add a null terminator at the end of the buffer. If we use sizeof(buffer)-1, we would be leaving space for the null terminator, but since fgets already accounts for that, we can simply use sizeof(buffer).
    {
        printf("%s", buffer); // fgets reads the newline character at the end of each line and stores it in the buffer.
    }

    fclose(fp);
    return 0;
}