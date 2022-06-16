/**
 * @file databaseImp.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "databaseImp.hpp"
/**
* @brief Construct a new Database Imp object
* 
*/
DatabaseImp::DatabaseImp(){}

/**
* @brief Destroy the Database Imp object
* 
*/
DatabaseImp::~DatabaseImp(){}

/**
* @brief Create a Researcher object
* 
* @param researcher* Researcher object that will be add to the database
*/ 
void DatabaseImp::createSpecie(Specie* specie) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(specie->getName() == species[i]->getName()){
            putSpecie(specie);
            return;
        }
    }
    species.push_back(specie);
    cout << "Specie created succesfully" << endl;
}

/**
* @brief Create a Researcher object
* 
* @param researcher* Researcher object that will be add to the database
*/
void DatabaseImp::createResearcher(Researcher* researcher) {
    researchers.push_back(researcher);
    cout << "Researcher created succesfully" << endl;
}

/**
* @brief Delete a Specie object
* 
* @param name name of the object that will be erased from the database
*/
void DatabaseImp::deleteSpecie(string name) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(name == species[i]->getName()){
            delete species[i];
            cout << "Specie deleted succesfully" << endl;
        }
    }
}

/**
* @brief Delete a Researcher object
* 
* @param name name of the object that will be erased from the database
*/
void DatabaseImp::deleteResearcher(string name) {
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(name == researchers[i]->getName()){
            delete researchers[i];
            cout << "Researcher deleted succesfully" << endl;
        }
    }
}

/**
* @brief Update a Specie object
* 
* @param update Specie object that will be updated from the database
*/
void DatabaseImp::putSpecie(Specie* update) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(update->getName() == species[i]->getName()){
            species[i]->setName(update->getName());
            species[i]->setHabitat(update->getHabitat());
            species[i]->setPopulation(update->getPopulation());
            species[i]->setPredator(update->getPredator());
            species[i]->setNearExtinction(update->getNearExtinction());
            species[i]->setHuntingTarget(update->getHuntingTarget());
            cout << "Specie updated succesfully" << endl;
            return;
        }
    }
    
    cout << "Couldn't find that specie" << endl;
}

/**
* @brief Update a Researcher object
* 
* @param update* Researcher object that will be updated from the database
*/
void DatabaseImp::putResearcher(Researcher* update) {
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(update->getName() == researchers[i]->getName()){
            researchers[i]->setName(update->getName());
            researchers[i]->setPassword(update->getPassword());
            researchers[i]->setJob(update->getJob());
            researchers[i]->setWorkingSince(update->getWorkingSince());
            researchers[i]->setAdmin(update->isAdmin());
            cout << "Researcher updated succesfully" << endl;
            return;
        }
    }
    
    cout << "Couldn't find that researcher" << endl;
}

/**
* @brief Get the Specie object
* 
* @param pos position in the database vector that specie object is
* @return Specie* object returned
*/
Specie* DatabaseImp::getSpecie(int pos) {
    return species[pos];
}

/**
* @brief Get the Species object
* 
* @return vector<Specie*> 
*/
vector<Specie*> DatabaseImp::getSpecies() {
    return species;
}

/**
* @brief Get the Position Researcher object in the database
* 
* @param name of the researcher object that will be searched
* @return int int position in the database vector of the researcher object 
*/
int DatabaseImp::getPositionResearcher(string name) {
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(name == researchers[i]->getName())
            return i;
    }

    cout << "Couldn't find that researcher" << endl;
    return -1;
}

/**
* @brief Get the Position Specie object in the database
* 
* @param name of the specie object that will be searched
* @return int position in the database vector of the specie object 
*/
int DatabaseImp::getPositionSpecie(string name) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(name == species[i]->getName())
            return i;
    }

    cout << "Couldn't find that specie" << endl;
    return -1;
}

/**
* @brief Get the Researcher object
* 
* @param pos position in the database vector that researcher object is
* @return Researcher* object returned
*/
Researcher* DatabaseImp::getResearcher(int pos) {
    return researchers[pos];
}

/**
* @brief Validates if the Researcher object is in the database
* 
* @param name username of the researcher
* @param password password of the researcher
* @return int 
*/
int DatabaseImp::login(string name, string password){
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(name == researchers[i]->getName()){
            if(password == researchers[i]->getPassword()){
                cout << "Login done succesfully!" << endl;
                return i;
            }
        }
    }

    cout << "User or password don't exist" << endl;
    return -1;
}