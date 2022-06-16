/**
 * @file database.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "researcherImp.hpp"
#include "specieImp.hpp"
#include <vector>
#include <iostream>


using namespace std;

/**
 * @brief Class that simulates the database
 * 
 */
class Database{
    public:
        /**
         * @brief Destroy the Database object
         * 
         */
        virtual ~Database(){};

        /**
         * @brief Create a Specie object
         * 
         * @param specie* Specie object that will be add to the database
         */
        virtual void createSpecie(Specie* specie) = 0;

        /**
         * @brief Create a Researcher object
         * 
         * @param researcher* Researcher object that will be add to the database
         */
        virtual void createResearcher(Researcher* researcher) = 0;

        /**
         * @brief Delete a Specie object
         * 
         * @param name name of the object that will be erased from the database
         */
        virtual void deleteSpecie(string name) = 0;

        /**
         * @brief Delete a Researcher object
         * 
         * @param name name of the object that will be erased from the database
         */
        virtual void deleteResearcher(string name) = 0;

        /**
         * @brief Update a Specie object
         * 
         * @param update Specie object that will be updated from the database
         */
        virtual void putSpecie(Specie* update) = 0;

        /**
         * @brief Update a Researcher object
         * 
         * @param update* Researcher object that will be updated from the database
         */
        virtual void putResearcher(Researcher* update) = 0;

        /**
         * @brief Get the Specie object
         * 
         * @param pos position in the database vector that specie object is
         * @return Specie* object returned
         */
        virtual Specie* getSpecie(int pos) = 0;

        /**
         * @brief Get the Species object
         * 
         * @return vector<Specie*> 
         */
        virtual vector<Specie*> getSpecies() = 0;

        /**
         * @brief Get the Researcher object
         * 
         * @param pos position in the database vector that researcher object is
         * @return Researcher* object returned
         */
        virtual Researcher* getResearcher(int pos) = 0;

        /**
         * @brief Get the Position Specie object in the database
         * 
         * @param name of the specie object that will be searched
         * @return int position in the database vector of the specie object 
         */
        virtual int getPositionSpecie(string name) = 0;

        /**
         * @brief Get the Position Researcher object in the database
         * 
         * @param name of the researcher object that will be searched
         * @return int int position in the database vector of the researcher object 
         */
        virtual int getPositionResearcher(string name) = 0;

        /**
         * @brief Validates if the Researcher object is in the database
         * 
         * @param name username of the researcher
         * @param password password of the researcher
         * @return int 
         */
        virtual int login(string name, string password) = 0;
};

#endif