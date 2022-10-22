#ifndef RESTO_FUNCTIONS_H_
#define RESTO_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "meal.h"

int randomize_menu(const int menu_size);
void display_bill(int menu, double tax, double tip);


#endif  // RESTO_FUNCTIONS_H_
