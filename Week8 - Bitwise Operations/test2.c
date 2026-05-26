#include <stdio.h>

int main(void) 
{
	char text[100];
    // This results in BUFFER OVERFLOW
    // even though it will work when compiled
    // when printinf the num, you will see the erro it is causing the program
	printf("Enter some text: ");
	scanf("%99[^\n]", text); // Read until new line + not attaching the'\n' to string
    // scanf("%99s",text); --> reads up to first whitespace
	printf("You have entered %s\n", text);

    int num = 5;
    printf("The value of num is %d\n", num);
    printf("You have entered %s\n", text);

}
