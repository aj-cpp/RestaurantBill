// CS2600 - Andrew Jujun
#include "resto_functions.h"

int main(int argc, char const *argv[])
{
  // Outline:
  // 1. Create meal struct
  // 2. Create menu table/map storing meals
  // 3. Implement random meal logic
  // 4. Display meal cost, tax amount, tip amount, and total bill 
  extern const int MENU_SIZE;
  char *ptr;

  display_bill(randomize_menu(MENU_SIZE), 
               strtod(argv[1], &ptr), 
               strtod(argv[2], &ptr));
  
  return EXIT_SUCCESS;
}