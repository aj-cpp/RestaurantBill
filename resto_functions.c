#include "resto_functions.h"

int randomize_menu(const int menu_size)
{
  srand(time(0));
  return rand() % menu_size;
}

void display_bill(int menu, double tax, double tip)
{
  extern Meal MenuTable[];

  Meal picked_meal = MenuTable[menu];

  double calc_tax = picked_meal.price * tax;
  double calc_tip = picked_meal.price * tip;

  printf("==============================\n");
  printf("%s\n", picked_meal.name);
  printf("Meal cost: $%.2f\n", picked_meal.price);
  printf("Tax percentage: %.0f%%\n", tax * 100);
  printf("Tax amount: $%.2f\n", calc_tax);
  printf("Tip percentage: %.0f%%\n", tip * 100);
  printf("Tip amount: $%.2f\n", calc_tip);
  printf("\n");
  printf("Total: $%.2f\n", picked_meal.price + calc_tax + calc_tip);
  printf("==============================\n");
}