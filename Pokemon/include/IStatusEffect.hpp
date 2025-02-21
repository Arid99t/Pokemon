#pragma once
#include <string>
using namespace std;
namespace N_Pokemon
{
    class Pokemon;

    namespace N_StatusEffects
    {
        class IStatusEffect {
        public:
            // Apply the effect (e.g., poison, burn)
            virtual void applyEffect(Pokemon* target) = 0;

            // Get the name of the effect
            virtual string getEffectName() = 0;

            // apply the changes due to effect after end of each turn.
            // Returns true if the target is able to move, else false.
            virtual bool turnEndEffect(Pokemon* target) = 0;

            // Remove the effect
            virtual void clearEffect(Pokemon* target) = 0;

            virtual ~IStatusEffect() = default;
        };
    }
}