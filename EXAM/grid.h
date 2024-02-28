#include <cmath>
#include <iostream>
#include <vector>

class Grid {
private:
  int dim;
  int size;

public:
  std::vector<int> grid; // Vector of integers
  Grid(int size_, int dim_ = 2) : size(size_), dim(dim_) {
    // Initialize grid with size^dim elements, all set to 0
    grid = std::vector<int>(std::pow(size, dim), 0);
  }
  int grid_full_size() { return std::pow(size, dim);}
  int get_size() {return size;}
  void print_grid() {
    for (int i = 0; i < grid.size(); ++i) {
      if ((i + 1) % size == 0) {
        std::cout << grid[i] << "\n";
      } else {
        std::cout << grid[i] << " ";
      }
    }
    std::cout << "\n";
  }
};
