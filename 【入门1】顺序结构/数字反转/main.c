#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char num_str[20]; // Assuming the input won't exceed 20 characters
    scanf("%s", num_str);

    int len = strlen(num_str);
    int dot_pos = -1;

    // Find the position of the decimal point, if it exists
    for (int i = 0; i < len; i++) {
        if (num_str[i] == '.') {
            dot_pos = i;
            break;
        }
    }

    // Reverse the integer part
    for (int i = 0; i < len / 2; i++) {
        char temp = num_str[i];
        num_str[i] = num_str[len - i - 1];
        num_str[len - i - 1] = temp;
    }

    // If there is a decimal point, reverse the fractional part
    if (dot_pos != -1) {
        for (int i = dot_pos + 1; i < (dot_pos + len + 1) / 2; i++) {
            char temp = num_str[i];
            num_str[i] = num_str[len - i + dot_pos];
            num_str[len - i + dot_pos] = temp;
        }
    }

    // Convert the reversed string back to a float and print it
    float reversed_num = atof(num_str);
    printf("%.3f\n", reversed_num);

    return 0;
}
