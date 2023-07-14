#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The main determines if a n is positive, negative or zero.
 *
 * Return: Always 0
 */
int main() {
    // Initialize random number generator
    srand(time(NULL));

    // Generate a random number between -100 and 100
int n = rand() % 201 - 100;

    // Print the number
    printf("The number: %d\n", n);

    // Check if the number is positive, negative, or zero
    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    return(0);
}

