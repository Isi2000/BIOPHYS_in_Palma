#include "grid.h"
#include "monomer.h"
//IL CODICE NON VA PERCHE' STAI FACENDO LA PROVA SUL PRIMO MONOMERO
//RUNNA E FA QUELLO CHE GLI CHIEDI
//DEVI TROVARE UNA IMPLEMENTAZIONE PIU' INTELLIGENTE PER FARE STI POLIMERI
#include <random> // For random number generation

class Polymer {
private:
    std::vector<Monomer> chain;

public:
    Polymer(int first_monomer_pos, int chain_length, Grid &grid) {
        chain.push_back(Monomer(1, first_monomer_pos, 0));

        for (int i = 0; i < chain_length; ++i) {
            std::vector<int> p_positions;
	    std::random_device rd;
	    std::mt19937 gen(rd());
	    std::uniform_int_distribution<> rand_index(0, 3); // For random index generation

            // Check neighboring positions
            if (grid.grid[first_monomer_pos + 1] == 0) {
                p_positions.push_back(first_monomer_pos + 1);
            }
            if (grid.grid[first_monomer_pos - 1] == 0) {
                p_positions.push_back(first_monomer_pos - 1);
            }
            if (grid.grid[first_monomer_pos - grid.get_size()] == 0) {
                p_positions.push_back(first_monomer_pos - grid.get_size());
            }
            if (grid.grid[first_monomer_pos + grid.get_size()] == 0) {
                p_positions.push_back(first_monomer_pos + grid.get_size());
            }

            // If there are available positions, choose one randomly and place a monomer
            if (!p_positions.empty()) {
                int random_index = rand_index(gen); // Generate a random index
                grid.grid[p_positions[random_index]] = 1; // Access position using random index
                first_monomer_pos = p_positions[random_index];
		
		}
            }
        }
    }
};


