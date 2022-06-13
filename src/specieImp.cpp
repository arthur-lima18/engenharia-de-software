#include "specieImp.hpp"

vector<Specie*> SpecieImp::allSpecies;

SpecieImp::SpecieImp(string name, string hab, int pop, bool pred, bool ext, bool ht){
    this->name = name;
    this->habitat = hab;
    this->population = pop;
    this->predator = pred;
    this->nearExtinction = ext;
    this->huntingTarget = ht;
}

SpecieImp::~SpecieImp(){}

void SpecieImp::setName(string name){
    this->name = name;
}

string SpecieImp::getName(){
    return this->name;
}

void SpecieImp::setHabitat(string habitat){
    this->habitat = habitat;
}

string SpecieImp::getHabitat(){
    return this->habitat;
}

void SpecieImp::setPopulation(int population){
    this->population = population;
}

int SpecieImp::getPopulation(){
    return this->population;
}

void SpecieImp::setPredator(bool predator){
    this->predator = predator;
}

bool SpecieImp::getPredator(){
    return this->predator;
}

void SpecieImp::setNearExtinction(bool nearExtinction){
    this->nearExtinction = nearExtinction;
}

bool SpecieImp::getNearExtinction(){
    return this->nearExtinction;
}

void SpecieImp::setHuntingTarget(bool huntingTarget){
    this->huntingTarget = huntingTarget;
}

bool SpecieImp::getHuntingTarget(){
    return this->huntingTarget;
}