#include <iostream>
#include "pokemon.h"

pokemon::pokemon(PokemonID pid, Name name, Type_main type_main,
                 Type_sub type_sub,
                 Total total,
                 HP hp,
                 Attack attack,
                 Defence defence,
                 Attack_special attack_special,
                 Defence_special defence_special,
                 Speed speed,
                 Generation generation,
                 Legendary legendary)
{
    /*name_ = name;
    type_ = type;
    height_ = height;
    weight_ = weight;
    level_ = level;
    pid_ = pid;*/

    name_ = name;
    type_main_ = type_main;
    type_sub_ = type_sub;
    total_ = total;
    hp_ = hp;
    attack_ = attack;
    defence_ = defence;
    attack_special_ = attack_special;
    defence_special_ = defence_special;
    speed_ = speed;
    generation_ = generation;
    legendary_ = legendary;

    //std::cout << name_ << endl;
}
void pokemon::printStats()
{
    /*
    cout << "Pokedex I.D. " << pid_    <<  endl;
    cout << "Name         " << name_   <<  endl;
    cout << "Type         " << type_   <<  endl;
    cout << "Height       " << height_ <<  endl;
    cout << "Weight       " << weight_ <<  endl;
    cout << "Level        " << level_  <<  endl; */

    cout << "name " << name_ << endl;
    cout << "type_main " << type_main_ << endl;
    cout << "type_sub " << type_sub_ << endl;
    cout << "total " << total_ << endl;
    cout << "hp " << hp_ << endl;
    cout << "attack " << attack_ << endl;
    cout << "defence " << defence_ << endl;
    cout << "attack_special " << attack_special_ << endl;
    cout << "defence_special " << defence_special_ << endl;
    cout << "speed " << speed_ << endl;
    cout << "generation " << generation_ << endl;
    cout << "legendary " << legendary_ << endl;
}