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

DatabaseImp::DatabaseImp(){}

DatabaseImp::~DatabaseImp(){}

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

void DatabaseImp::createResearcher(Researcher* researcher) {
    researchers.push_back(researcher);
    cout << "Researcher created succesfully" << endl;
}

void DatabaseImp::deleteSpecie(string name) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(name == species[i]->getName()){
            delete species[i];
            cout << "Specie deleted succesfully" << endl;
        }
    }
}

void DatabaseImp::deleteResearcher(string name) {
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(name == researchers[i]->getName()){
            delete researchers[i];
            cout << "Researcher deleted succesfully" << endl;
        }
    }
}

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

Specie* DatabaseImp::getSpecie(int pos) {
    return species[pos];
}

vector<Specie*> DatabaseImp::getSpecies() {
    return species;
}

int DatabaseImp::getPositionResearcher(string name) {
    for(unsigned int i = 0; i < researchers.size(); i++){
        if(name == researchers[i]->getName())
            return i;
    }

    cout << "Couldn't find that researcher" << endl;
    return -1;
}

int DatabaseImp::getPositionSpecie(string name) {
    for(unsigned int i = 0; i < species.size(); i++){
        if(name == species[i]->getName())
            return i;
    }

    cout << "Couldn't find that specie" << endl;
    return -1;
}

Researcher* DatabaseImp::getResearcher(int pos) {
    return researchers[pos];
}

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