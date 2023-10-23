#include <stdio.h>

#include <string.h>

#include <ctype.h>



int main() {

    char input[256];

    int letterCount[26] = {0}; // Array to store the count of each letter initialized to zeros



    printf("Enter text strings (press Enter on an empty line to exit):\n");



    while (1) {

        fgets(input, sizeof(input), stdin); // get the input from the user via keyboard



        // Check for an empty line to exit the loop

        if (strlen(input) == 1 && input[0] == '\n') {

            break;

        }



        // Iterate through the characters in the input

        for (int i = 0; i < strlen(input); i++) {

            char c = input[i];



            // Check if the character is a letter (A-Z or a-z)

            if (isalpha(c)) {

                // Convert the character to uppercase and calculate the corresponding index

                int index = toupper(c) - 'A';

                letterCount[index]++;

            }

        }

    }



    // Display the letter counts in the specified format

    for (int i = 0; i < 26; i++) {

        printf("%c: %d ", 'A' + i, letterCount[i]);

    }

    printf("\n");



    return 0;

}