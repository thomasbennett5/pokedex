#include <iostream>
#include "pokemon.h"

pokemon::pokemon(Name name, Type type, Height height, Weight weight, Level level, PokemonID pid)
{
    name_ = name;
    type_ = type;
    height_ = height;
    weight_ = weight;
    level_ = level;
    pid_ = pid;

    std::cout << name_ << endl;
}