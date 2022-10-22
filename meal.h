#ifndef MEAL_H_
#define MEAL_H_

#include <stdio.h>
#include <stddef.h>

typedef struct
{
  char *name;
  double price;
} Meal, *MealPtr;

typedef const Meal *MealConstPtr;

#endif  // MEAL_H_
