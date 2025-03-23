#include <stdio.h>
#include <string.h>

int strings(){
    // Each character is 1 byte
    // The null terminator is 1 byte,
    // The null terminator is the last char in any char array
    // Each char is storred in it's ASCII value
    // The null terminator is '\0' or 0
    // If the null terminator is missing the code will keep reading memory until it finds a null terminator which can lead to weird bugs,
    // since the next memory address might not be allocated to the program.
    char str[] = "Hello, World!"; // A string is an array of characters in C.
    printf(str);
    puts("");
    return 0;
};

int readInput(){
    char name[40];
    printf("What is your name? ");
    scanf("%39s", name); // Read at most 39 characters
    printf("Hello, %s!\n", name); 
    // The name of an array is a pointer to the first element of the array, so the & is not needed.
    // The array will have a bunch of garbage values after the null terminator if the input is less than 39 characters.
    // This is because the garbage values are whatever was in memory before the array was created.
    return 0;
}

int stringConcatenation(){
    char concat[50];
    strcpy(concat, "Hello,"); // Copy the first string into the buffer
    strcat(concat, "World!");  // Concatenate the second string
    printf("%s", concat); // There is no + operator in C so you have to use functions to concatenate strings.
    puts("");
    return 0;
}

int stringConcatenationSafe(){
    char concat[50];
    strcpy_s(concat, sizeof(concat), "Hello,"); // The _s functions are safe versions of the functions that check for buffer overflows
    strcat_s(concat, sizeof(concat), "World!"); // If you do not use them you can corrupt memory by trying to allocate more chars than the buffer can hold.
    printf("%s", concat);
    puts("");
    return 0;
}