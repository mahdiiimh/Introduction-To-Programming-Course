#include <stdio.h> // Provides standard input and output functions.

int main(int argc,char *argv[]){
    // Print the total number of command-line arguments.
    // argc includes the name or path of the program itself.
    printf("Argument count= %d \n",argc);

    // Iterate through all command-line arguments.
    for(int i=0;i< argc; i++){
        // Print the index and value of the current argument.
        // argv[i] is a string containing the argument at index i.
        printf("Argv[%d] = %s \n",i , argv[i]);

    }
}

// How to run ?
// gcc FILENAME.c -o program
// ./program hello 123