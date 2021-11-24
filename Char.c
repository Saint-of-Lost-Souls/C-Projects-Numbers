#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = 'A';

    printf("char c: %d\n", c); // return the ASCII value of A
    printf("char c: %c\n", c); // return the value of A
    c = 66;
    printf("char c: %c\n\n", c); // return the ASCII value of A

    // Acquire user input
    printf("Input a character: ");
    c = getchar();
    printf("You entered: %c\n", c);
    c = getchar();
    printf("You entered: %c\n", c);
    return EXIT_SUCCESS;
}
