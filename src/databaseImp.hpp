#ifndef DATABASEIMP_HPP
#define DATABASEIMP_HPP

#include "database.hpp"

class DatabaseImp : public Database{
    vector<Specie> species;
    vector<Researcher> researchers;

    public:
        DatabaseImp();
        virtual ~DatabaseImp();

        //falta parâmetros em todas
        void createSpecie();
        void createResearcher();
        void deleteSpecie();
        void deleteResearcher();
        void putSpecie();
        void putResearcher();
        void getSpecies(); //não é void
};

#endif