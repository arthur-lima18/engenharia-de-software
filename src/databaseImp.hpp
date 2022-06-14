#ifndef DATABASEIMP_HPP
#define DATABASEIMP_HPP

#include "database.hpp"

using namespace std;

class DatabaseImp : public Database{
    vector<Specie*> species;
    vector<Researcher*> researchers;

    public:
        DatabaseImp();
        virtual ~DatabaseImp();

        void createSpecie(Specie* specie);
        void createResearcher(Researcher* researcher);
        void deleteSpecie(string name);
        void deleteResearcher(string name);
        void putSpecie(Specie* update);
        void putResearcher(Researcher* update);
        Specie* getSpecie(int pos);
        vector<Specie*> getSpecies(); 
        Researcher* getResearcher(int pos);
        int getPositionSpecie(string name);
        int getPositionResearcher(string name);

        int login(string name, string password);
};

#endif