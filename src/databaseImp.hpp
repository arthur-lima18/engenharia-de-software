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

/**
 * @brief implementation Class that simulates the database
 * 
 */
class DatabaseImp : public Database{
    /// @brief vector that contains all species
    vector<Specie*> species;

    ///@brief vector that contains all researchers
    vector<Researcher*> researchers;

    public:
        /**
         * @brief Construct a new Database Imp object
         * 
         */
        DatabaseImp();

        /**
         * @brief Destroy the Database Imp object
         * 
         */
        virtual ~DatabaseImp();

        /**
         * @brief Create a Researcher object
         * 
         * @param researcher* Researcher object that will be add to the database
         */ 
        void createSpecie(Specie* specie);

        /**
         * @brief Create a Researcher object
         * 
         * @param researcher* Researcher object that will be add to the database
         */
        void createResearcher(Researcher* researcher);

        /**
         * @brief Delete a Specie object
         * 
         * @param name name of the object that will be erased from the database
         */
        void deleteSpecie(string name);

        /**
         * @brief Delete a Researcher object
         * 
         * @param name name of the object that will be erased from the database
         */
        void deleteResearcher(string name);

        /**
         * @brief Update a Specie object
         * 
         * @param update Specie object that will be updated from the database
         */
        void putSpecie(Specie* update);

        /**
         * @brief Update a Researcher object
         * 
         * @param update* Researcher object that will be updated from the database
         */
        void putResearcher(Researcher* update);

        /**
         * @brief Get the Specie object
         * 
         * @param pos position in the database vector that specie object is
         * @return Specie* object returned
         */
        Specie* getSpecie(int pos);

        /**
         * @brief Get the Species object
         * 
         * @return vector<Specie*> 
         */
        vector<Specie*> getSpecies(); 

        /**
         * @brief Get the Researcher object
         * 
         * @param pos position in the database vector that researcher object is
         * @return Researcher* object returned
         */
        Researcher* getResearcher(int pos);

        /**
         * @brief Get the Position Specie object in the database
         * 
         * @param name of the specie object that will be searched
         * @return int position in the database vector of the specie object 
         */
        int getPositionSpecie(string name);

        /**
         * @brief Get the Position Researcher object in the database
         * 
         * @param name of the researcher object that will be searched
         * @return int int position in the database vector of the researcher object 
         */
        int getPositionResearcher(string name);


        /**
         * @brief Validates if the Researcher object is in the database
         * 
         * @param name username of the researcher
         * @param password password of the researcher
         * @return int 
         */
        int login(string name, string password);
};

#endif