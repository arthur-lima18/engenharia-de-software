#ifndef SPECIEIMP_HPP
#define SPECIEIMP_HPP

#include "specie.hpp"

class SpecieImp : public Specie{
    string name;
    string habitat;
    int population;
    bool predator;
    bool nearExtinction;
    bool huntingTarget;

    static vector<Specie*> allSpecies;

    public:
        SpecieImp(string name, string hab, int pop, bool pred, bool ext, bool ht);
        virtual ~SpecieImp();

        void setName(string name);
        string getName();
        void setHabitat(string habitat);
        string getHabitat();
        void setPopulation(int population);
        int getPopulation();
        void setPredator(bool predator);
        bool getPredator();
        void setNearExtinction(bool nearExtinction);
        bool getNearExtinction();
        void setHuntingTarget(bool huntingTarget);
        bool getHuntingTarget();
};

#endif