#include <vector>
#include "Pokedex.h"
#include "Pokemon.h"

using namespace std;

class Equipo{
    private:
    Pokedex pokedex;
    vector<Pokemon> equipo;
    public:
    Equipo();
    ~Equipo();

};