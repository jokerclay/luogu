#include <stdio.h>

int main()
{
    char input;
    scanf("%c", &input);

    // Check if the input character is a lowercase letter (ASCII range: 'a' = 97 to 'z' = 122)
    if (input >= 'a' && input <= 'z') {
        // Convert to uppercase by subtracting the difference between 'a' and 'A' from the character
        char uppercase = input - ('a' - 'A');
        printf("%c\n", uppercase);
    } else {
        printf("Not a lowercase letter.\n");
    }

    return 0;
}
