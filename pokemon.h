#ifndef POKEMON_HEADER
#define POKEMON_HEADER

#include <string>
#include <iostream>

using namespace std;

typedef string Name;
typedef string Type_main;
typedef string Type_sub;
typedef unsigned int Total, HP, Attack, Defence, Attack_special, Defence_special, Speed, Generation;
typedef unsigned int Legendary;
typedef unsigned int PokemonID;

/*
typedef double Height;
typedef double Weight;
typedef unsigned int Level;
*/

struct pokemon
{
    PokemonID pid_;
    Name name_;
    Type_main type_main_;
    Type_main type_sub_;
    Total total_;
    HP hp_;
    Attack attack_;
    Defence defence_;
    Attack_special attack_special_;
    Defence_special defence_special_;
    Speed speed_;
    Generation generation_;
    Legendary legendary_;

    //pokemon(Name name, Type type, Height height, Weight weight, Level level, PokemonID pid);

    pokemon(PokemonID pid,
            Name name,
            Type_main type_main,
            Type_sub type_sub,
            Total total,
            HP hp,
            Attack attack,
            Defence defence,
            Attack_special attack_special,
            Defence_special defence_special,
            Speed speed,
            Generation generation,
            Legendary legendary);

    pokemon() = delete;

    void printStats();
};

#endif