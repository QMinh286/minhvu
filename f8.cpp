
#pragma warning(disable: 4996) // required by Visual Studio
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void validArguments(int argc, char* argv[]);
int positiveInterger(const char* str);

int main(int argc, char* argv[]) {
    // Validate command line arguments
    validArguments(argc, argv);

    // The rest of your program logic here using the validated arguments

    return 0;
}
int positiveInteger(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9') {
            return 0;  // Not a digit
        }
    }
    return 1;  // All characters are digits
}
void validArguments(int argc, char* argv[]) {
    // Check if the correct number of arguments are provided
    if (argc != 5) {
        printf("Error: Incorrect number of arguments. The program requires exactly four arguments.\n");
        exit(EXIT_FAILURE);
    }
    const char str = 0;
    if (positiveInteger(argv[1])) {
        fprintf(stderr, "Error: Argument 1 should be a positive integer.\n");
        exit(EXIT_FAILURE);
    }

    // Check the length of the string arguments
    for (int i = 2; i < argc; i++) {
        if (strlen(argv[i]) > 20) {
            printf("Error: Argument %d should be a string with a length no longer than 20 characters.\n");
                exit(EXIT_FAILURE);
        }
    }

    // If all checks pass, you can use the validated arguments in the rest of the program logic
}