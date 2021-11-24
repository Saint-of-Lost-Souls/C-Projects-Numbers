#include <stdio.h>
#include <stdlib.h>


    // A float can hold up to 6-7 digits
    // A double can hold up to 15-16 digits
int main()
{
    double decimal_digits = 1.23456789;
    double world_population = 7.801E9;
    double plank_constant = 6.626E-34;

    // int a = 1000000 = 1e6 = 1 to the power of 10 times 6
    // e is the power of ten
    printf("%12.0f | Decimal Digits\n", decimal_digits);
    printf("%12.1f | Decimal Digits, 1 decimal digit\n", decimal_digits);
    printf("%12.3f | Decimal Digits, 3 decimal digit\n\n", decimal_digits);

    printf("%12.0f | World Population\n", world_population);
    printf("%12.1f | World Population, decimal, 1 decimal digit\n", world_population);
    printf("%12.3f | World Population, decimal, 3 decimal digit\n", world_population);
    printf("%12.1e | World Population, scientific, 1 decimal digit\n", world_population);
    printf("%12.3e | World Population, scientific, 3 decimal digit\n\n", world_population);

    printf("%12.0e | Plank Constant\n", plank_constant);
    printf("%12.1e | Plank Constant, 1 decimal digit\n", plank_constant);
    printf("%12.3e | Plank Constant, 3 deciaml digit\n\n", plank_constant);

    return EXIT_SUCCESS;    
}