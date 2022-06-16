/**
 * @file specieImp.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "specieImp.hpp"

SpecieImp::SpecieImp(string initialName, string hab, int pop, bool pred, bool ext, bool ht){
    name = initialName;
    habitat = hab;
    population = pop;
    predator = pred;
    nearExtinction = ext;
    huntingTarget = ht;
}

SpecieImp::~SpecieImp(){}

void SpecieImp::setName(string newName){
    name = newName;
}

string SpecieImp::getName(){
    return name;
}

void SpecieImp::setHabitat(string newHabitat){
    habitat = newHabitat;
}

string SpecieImp::getHabitat(){
    return habitat;
}

void SpecieImp::setPopulation(int newPopulation){
    population = newPopulation;
}

int SpecieImp::getPopulation(){
    return population;
}

void SpecieImp::setPredator(bool isPredator){
    predator = isPredator;
}

bool SpecieImp::getPredator(){
    return predator;
}

void SpecieImp::setNearExtinction(bool isNearExtinction){
    nearExtinction = isNearExtinction;
}

bool SpecieImp::getNearExtinction(){
    return nearExtinction;
}

void SpecieImp::setHuntingTarget(bool isHuntingTarget){
    huntingTarget = isHuntingTarget;
}

bool SpecieImp::getHuntingTarget(){
    return huntingTarget;
}