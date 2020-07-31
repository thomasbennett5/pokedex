#include "pokemon.h"
#include "pokemon_class.cxx"

void foo()
{
    pokemon weedle(1, "Bulbasaur","Grass","Poison",318,45,49,49,65,65,45,1,0);
    weedle.printStats();
}

int main()
{
    foo();
    return 0;
}