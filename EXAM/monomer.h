#include <cmath>
#include <iostream>
#include <vector>

class Monomer {
  // object rapresenting a single element of a polymer chain
private:
  bool polarization;
  int position;    // in a grid
  const int index; // inside the chain

public:
  Monomer(bool pol_, int initial_pos, const int id)
      : polarization(pol_), position(initial_pos), index(id) {}

  bool get_polarization() { return polarization; }
  int get_position() { return position; }
  const int get_index() { return index; }
};
