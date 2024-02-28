#include "polymer.h"
#include <iostream>
int main()
{
  Grid griglia(50);
  Polymer(1010, 10, griglia);
  griglia.print_grid();
}
