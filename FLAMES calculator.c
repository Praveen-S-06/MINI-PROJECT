#include <stdio.h>
#include <string.h>

// Function to remove a character from a string
void removeChar(char *str, int index) {
    memmove(str + index, str + index + 1, strlen(str) - index);
}

// Function to calculate FLAMES
char calculateFLAMES(char *name1, char *name2) {
    int len1 = strlen(name1);
    int len2 = strlen(name2);

    // Copy name2 to a temporary string
    char temp[len2 + 1];
    strcpy(temp, name2);

    // Iterate through name1 and remove common letters from name2
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (name1[i] == temp[j]) {
                removeChar(temp, j);
                len2--;
                break;
            }
        }
    }

    // Calculate length of remaining letters
    int remaining = len1 + len2;

    // Finding the FLAMES result
    char flames[] = "FLAMES";
    int index = 0;
    while (strlen(flames) > 1) {
        index = (index + remaining - 1) % strlen(flames);
        removeChar(flames, index);
    }

    return flames[0];
}

int main() {
    char name1[50], name2[50];
    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);

    char result = calculateFLAMES(name1, name2);

    switch (result) {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Lovers\n");
            break;
        case 'A':
            printf("Affectionate\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enemies\n");
            break;
        case 'S':
            printf("Siblings\n");
            break;
        default:
            printf("Error\n");
    }

    return 0;
}
