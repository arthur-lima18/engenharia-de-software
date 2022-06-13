#ifndef SPECIE_HPP
#define SPECIE_HPP

#include <string>
#include <vector>

using namespace std;

class Specie{
    public:
        virtual ~Specie();

        virtual void setName(string name);
        virtual string getName();
        virtual void setHabitat(string habitat);
        virtual string getHabitat();
        virtual void setPopulation(int population);
        virtual int getPopulation();
        virtual void setPredator(bool predator);
        virtual bool getPredator();
        virtual void setNearExtinction(bool nearExtinction);
        virtual  bool getNearExtinction();
        virtual void setHuntingTarget(bool huntingTarget);
        virtual bool getHuntingTarget();
};

#endif