#include <stdio.h>

int main(int argc, char *argv[])
{

    int n = 3;

    // Upper part of the pattern
    for (int i = 1; i <= n; i++) {


        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }



#if 0 
    int n = 3;
    int spaces = n - 1;
    int stars = 1;
    for (int i = 1; i <= 2 * n - 1; i++) {

        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }
        for (int k = 1; k <= stars; k++) {
            printf("*");
        }
        printf("\n");

        if (i < n) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

#endif /* if 0 */

    return 0;
}
