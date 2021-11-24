#include <stdio.h>

int main(void) 
{
  printf("===^^===\n");
  printf("Welcome to the Decimal to Hexadecimal Converter!\n");
  printf("Please enter a number:\n");

  int the_number;
  scanf("%d", &the_number); // &= store the value inside the variable
  printf("Decimal Representation:   %9d\n", the_number); // %d= Decimal
  printf("Converted to hexadecimal: %9X\n", the_number); // %x= hexadecimal
  printf("===^^===\n");





  return 0;
}