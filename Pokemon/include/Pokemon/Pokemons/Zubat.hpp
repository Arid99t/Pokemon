#pragma once
#include "../Pokemon.hpp"

namespace N_Pokemon {
    namespace N_Pokemons {

        class Zubat : public Pokemon {
        protected:
            Zubat();
            void supersonic(Pokemon& target);
        };

    }
}