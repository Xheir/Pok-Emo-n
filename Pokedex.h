#include "Pokemon.h"
using namespace std;

class Pokedex{
    private:
    public:
    Pokedex();
    ~Pokedex();
    Pokemon addPokemon(string string);
    Pokemon removePokemon(string string);
    Pokemon getPokemon(string string);
    
};