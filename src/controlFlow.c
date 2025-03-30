#include <stdio.h>

int ifElse() {
    // If else and logical operators work the same as in C#.
    if(25 < 30) {
        puts("25 is less than 30");
    }
    else {
        puts("25 is greater than 30");
    }
    return 0;
}   

int switchCase() {
    // Since there is no string type in C, so we have to use 2D char arrays to store string arrays, 
    // The first value is how many strings, the second value is how many chars in each string.
    char countryCodes[5][10] = {
        "SE", 
        "DK", 
        "NO", 
        "FI",
         "IS"
        }; 
    int length = sizeof(countryCodes) / sizeof(countryCodes[0]);

    // Multiplying the first char by 256 shifts it to a higher byte
    // Adding the second char gives us a unique value for each country code
    // This is a common trick in C to create a unique value for a pair of characters.
    // Without this, each case would need an if/else that would be slower and more verbose.
    for (int i = 0; i < length; i++) {
        switch (countryCodes[i][0] * 256 + countryCodes[i][1]) { // You can only switch on integers in C
            case 'S' * 256 + 'E':
                printf("%s: Sweden\n", countryCodes[i]);
                break;
            case 'D' * 256 + 'K':
                printf("%s: Denmark\n", countryCodes[i]);
                break;
            case 'N' * 256 + 'O':
                printf("%s: Norway\n", countryCodes[i]);
                break;
            case 'F' * 256 + 'I':
                printf("%s: Finland\n", countryCodes[i]);
                break;
            case 'I' * 256 + 'S':
                printf("%s: Iceland\n", countryCodes[i]);
                break;
            default:
                printf("%s: Unknown country code\n", countryCodes[i]);
                break;
        }
    }
    return 0;
}

int ternaryOperator() {
    //Ternary operator are similar to C#
    //Except that you are allowed to run them standalone without assigning or returning something.
    (25 > 30) 
    ? puts("25 is greater than 30")
    : puts("25 is less than 30");

    return 0;
}