#ifndef POKEMON_HEADER
#define POKEMON_HEADER

#include <string>

using namespace std;

typedef string Name;
typedef string Type;
typedef double Height;
typedef double Weight;
typedef unsigned int Level;
typedef unsigned int PokemonID;


struct pokemon
{
    PokemonID pid_;
    Name name_;
    Type type_;
    Height height_;
    Weight weight_;
    Level level_;

    pokemon(Name name, Type type, Height height, Weight weight, Level level, PokemonID pid);

    pokemon() = delete;
    
    void printStats()
    {

    }
    
};


#endif