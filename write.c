#include <stdio.h>

int main() {
    FILE *fp;
    char W1[100], W2[100];

    // Open the file for writing
    fp = fopen("empty.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Take input from the user
    printf("Enter the first word: ");
    scanf("%s", W1);

    printf("Enter the second word: ");
    scanf("%s", W2);

    // Write the words to the file
    fprintf(fp, "%s %s", W1, W2);

    // Close the file
    fclose(fp);

    printf("Words written to empty.txt\n");

    return 0;
}