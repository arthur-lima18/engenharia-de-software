/**
 * @file databaseImp.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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