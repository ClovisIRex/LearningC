#include <stdio.h>
   /* copy input to output; 1st version  */
int main()
{
    int c;

    while ((c = getchar()) != EOF) {
                printf("The value of EOF is %d\n\n", EOF);

        putchar(c);
        printf("The expression getchar() != EOF evaluates to %d\n", getchar() != EOF);
    }
    return 0;
}
