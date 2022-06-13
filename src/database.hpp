#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include <iostream>
#include "researcher.hpp"
#include "specie.hpp"

class Database{
    public:
        virtual ~Database();

        virtual void createSpecie(Specie specie);
        virtual void createResearcher(Researcher researcher);
        virtual void deleteSpecie(string name);
        virtual void deleteResearcher(string name);
        virtual void putSpecie(Specie update);
        virtual void putResearcher(Researcher update);
        virtual Specie* getSpecie(int pos);
        virtual vector<Specie*> getSpecies();
        virtual Researcher* getResearcher(int pos);
        virtual int getPositionSpecie(string name);
        virtual int getPositionReasercher(string name);

        virtual int login(string name, string password);
};

#endif