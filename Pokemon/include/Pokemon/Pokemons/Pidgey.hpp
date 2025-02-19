#pragma once
#include "../Pokemon.hpp"
namespace N_Pokemon {
    namespace N_Pokemons {

        class Pidgey : public Pokemon {
        protected:
            Pidgey();
            void wingAttack(Pokemon& target);
        };

    }
}