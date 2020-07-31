#include "pokemon.h"
#include "pokemon_class.cxx"

void foo()
{
    pokemon bulbasaur(1, "Bulbasaur","Grass","Poison",318,45,49,49,65,65,45,1,0);
    pokemon ivysaur (2,"Ivysaur","Grass","Poison",405,60,62,63,80,80,60,1,0);

    bulbasaur.printStats();
    
    ivysaur.printStats();
}

int main()
{
    foo();
    return 0;
}