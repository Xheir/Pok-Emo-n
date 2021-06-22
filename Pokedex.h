#include "Pokemon.h"
#include <fstream>
#include <vector>
using namespace std;

class Pokedex{
    private:
    fstream leer;
    public:
    Pokedex();
    ~Pokedex();
    Pokemon addPokemon(string string);
    Pokemon removePokemon(string string);
    Pokemon getPokemon(string string);
    
};