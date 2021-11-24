#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bunnies = 12;
    int guinea_pigs = 9;
    int furbabies = bunnies + guinea_pigs;

    printf("In the classromm, there are:\n");
    printf("\t%d bunnies\n", bunnies);
    printf("\t%d guinea pigs\n", guinea_pigs);
    printf("Giving a total of %d furbabies.\n", furbabies);
    return EXIT_SUCCESS;
}
