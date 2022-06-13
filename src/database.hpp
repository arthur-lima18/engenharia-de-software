#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <vector>
#include "researcher.hpp"
#include "specie.hpp"

class Database{
    public:
        virtual ~Database();

        //falta parâmetros em todas
        virtual void createSpecie();
        virtual void createResearcher();
        virtual void deleteSpecie();
        virtual void deleteResearcher();
        virtual void putSpecie();
        virtual void putResearcher();
        virtual void getSpecies(); //não é void
};

#endif