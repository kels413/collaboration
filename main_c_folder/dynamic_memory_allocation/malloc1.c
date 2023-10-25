#include <stdio.h>

/**
 * a beginner-friendly question involving `malloc`:
 *  

*Question:*

You want to create an array to store the names of your favorite fruits. You don't know how many fruits you'll have, so you decide to use dynamic memory allocation with `malloc`. Write a C program that does the following:

1. Asks the user how many favorite fruits they have.
2. Allocates memory to store the names of these fruits dynamically.
3. Asks the user to input the names of their favorite fruits one by one.
4. Stores these fruit names in the dynamically allocated memory.
5. Prints out the list of favorite fruits.

Remember to free the allocated memory when you're done with it to avoid memory leaks.

This exercise will help you practice using `malloc` to allocate memory for a variable number of items and interact with the user to input data.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numFavorites;

    // Ask the user how many favorite fruits they have
    printf("How many favorite fruits do you have? ");
    scanf("%d", &numFavorites);

    // Check if the input is a valid positive number
    if (numFavorites <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1; // Exit with an error code
    }

    // Allocate memory for an array to store the fruit names
    char **favoriteFruits = (char **)malloc(numFavorites * sizeof(char *));
    if (favoriteFruits == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Ask the user to input the names of their favorite fruits
    for (int i = 0; i < numFavorites; i++) {
        printf("Enter the name of favorite fruit #%d: ", i + 1);
        
        // Allocate memory for the fruit name and read it from the user
        favoriteFruits[i] = (char *)malloc(100 * sizeof(char)); // Assuming maximum name length of 99 characters
        scanf("%99s", favoriteFruits[i]);
    }

    // Print out the list of favorite fruits
    printf("\nYour favorite fruits:\n");
    for (int i = 0; i < numFavorites; i++) {
        printf("%d. %s\n", i + 1, favoriteFruits[i]);
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < numFavorites; i++) {
        free(favoriteFruits[i]);
    }
    free(favoriteFruits);

    return 0;
}
