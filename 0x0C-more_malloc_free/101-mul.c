#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

int multiply(int num1, int num2) {
    return num1 * num2;
}

int main(int argc, char *argv[]) {
    // Check for correct number of arguments
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }
    // Check if arguments are composed of digits
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {
            if (!isdigit(argv[i][j])) {
                printf("Error\n");
                return 98;
            }
        }
    }
    // Parse arguments
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    // Perform multiplication
    int result = multiply(num1, num2);
    // Print result
    printf("%d\n", result);
    return 0;
}
