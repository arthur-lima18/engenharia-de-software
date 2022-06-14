#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "researcher.hpp"
#include "specie.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Database{
    public:
        virtual ~Database(){};

        virtual void createSpecie(Specie* specie) = 0;
        virtual void createResearcher(Researcher* researcher) = 0;
        virtual void deleteSpecie(string name) = 0;
        virtual void deleteResearcher(string name) = 0;
        virtual void putSpecie(Specie* update) = 0;
        virtual void putResearcher(Researcher* update) = 0;
        virtual Specie* getSpecie(int pos) = 0;
        virtual vector<Specie*> getSpecies() = 0;
        virtual Researcher* getResearcher(int pos) = 0;
        virtual int getPositionSpecie(string name) = 0;
        virtual int getPositionReasercher(string name) = 0;

        virtual int login(string name, string password) = 0;
};

#endif