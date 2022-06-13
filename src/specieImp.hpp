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

    public:
        SpecieImp(string initialName, string hab, int pop, bool pred, bool ext, bool ht);
        virtual ~SpecieImp();

        void setName(string newName);
        string getName();
        void setHabitat(string newHabitat);
        string getHabitat();
        void setPopulation(int newPopulation);
        int getPopulation();
        void setPredator(bool isPredator);
        bool getPredator();
        void setNearExtinction(bool isNearExtinction);
        bool getNearExtinction();
        void setHuntingTarget(bool isHuntingTarget);
        bool getHuntingTarget();
};

#endif