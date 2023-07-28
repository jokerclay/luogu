#include <stdio.h>

int main()
{

    char symbol;
    scanf("%c",&symbol);
    int n = 3;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("%c",symbol);
        }

        printf("\n");
    }


}
