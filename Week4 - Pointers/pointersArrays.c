#include <stdio.h>

int main(void) {
    int myarray[5] = {10, 20, 30, 40, 50};


    printf("The value in the first element is %d \n", myarray[0]);
    printf("The address in the first element is %p \n", &myarray[0]);
    // an adress uses %p in a printf

    printf("The address of location 0 is %p \n", myarray); // Address is 61FF0C
    // name of an array -> The ADDRESS of the first memory location
    // Thefore &myarray[0] is equivalent to myarray

     // Every + 1 added is 4 bytes
    printf("The address of location 1 is %p \n", myarray + 1); // Address is 61FF10
    printf("The address of location 2 is %p \n", myarray + 2); // Address is 61FF14
    printf("The address of location 3 is %p \n", myarray + 3); // Address is 61FF18


    // In general, the address of the ith location of any array is (myarray + i)
    // How can we access the data using these addresses?
    // BY dereferencing the addresses using *

    // If the adress of the ith location is (myarray+i) than the data is *(myarray+i)

    // display the array using ARRAY indexing []
    for (int i = 0;  i<5; i++)
    {
        printf("The value at the location %d is %d \n", i, myarray[i]);
    }
    // display the array using POINTER indexing 
    for (int i = 0 ; i < 5; i++)
    {
        printf("The value at location %d is %d \n", i, *(myarray+i));
    }
    // Remember that myarray[i] is equivalent to *(myarray*i)

// *********************************************************************/
    // What happens if you go overboard ? beyond the last element
    // C will not do boundary checking for you.
    // If you go beyond the area of your array, you will destroy other variables
    for (int i=0; i <=5; i++ )
    {
        printf("The value at location %d is %d \n", i, myarray[i]);
       // myarray[5] = 3; // here we are destroying the value of i and we enter infinite loop
    }

}