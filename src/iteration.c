#include <stdio.h>

int forLoop(){
    int n = 10;
    for (int i =0; i < n; i++){
        printf("Iteration %d\n", i+1);
    }
    return 0;
};
int whileLoop(){
    char str[] = "Hello World!";
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }   
    printf("Length of string: %d\n", len);
    return 0;
};
int doWhileLoop(){
    char answer[10];

    int i = 0;

    do {
        i++;
        printf("Iteration %d\n", i);
        printf("Do you want to continue? (yes/no): ");
        scanf("%9s", answer);

    }
    while (strcmp(answer, "no") != 0);

    return 0;
};