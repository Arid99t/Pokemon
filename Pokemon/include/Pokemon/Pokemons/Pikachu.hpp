#pragma once
#include "../Pokemon.hpp"
namespace N_Pokemon {
    namespace N_Pokemons {

        class Pikachu : public Pokemon {
        private:
            Pikachu();
            void thunderShock(Pokemon* target);
        };

    }
}