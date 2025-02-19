#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Caterpie : public Pokemon {
        protected:
            Caterpie();
            void bugBite(Pokemon& target);
        };

    }
}