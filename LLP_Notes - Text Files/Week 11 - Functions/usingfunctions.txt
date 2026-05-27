#include <stdio.h>

// Return 1 if successful, 0 if failed
int writeMessage(const char *filename, const char *message)
{
    FILE *fp = fopen(filename, "a");
    if (!fp)
    {
        return 0;
    }
    fprintf(fp, message); // since message is a string, we can simply pass it as an argument to fprintf without any format specifiers.
    fclose(fp);
    return 1;
}

int main(void)
{
    if (!writeMessage("myfile.txt", "Hello, World!\n"))
    {
        printf("Failed to write message to file.\n");
        return -1;
    }

    printf("Message written to file successfully.\n");

    return 0;
}