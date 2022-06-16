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

/**
* @brief Construct a new Specie Imp object
* 
* @param initialName initial name
* @param hab initial habitat
* @param pop initial population
* @param pred initial predator condition
* @param ext initial near extinction condition
* @param ht initial hunting target condition
*/
SpecieImp::SpecieImp(string initialName, string hab, int pop, bool pred, bool ext, bool ht){
    name = initialName;
    habitat = hab;
    population = pop;
    predator = pred;
    nearExtinction = ext;
    huntingTarget = ht;
}

/**
* @brief Destroy the Specie Imp object
* 
*/
SpecieImp::~SpecieImp(){}

/**
* @brief Set the Name object
* 
* @param name name that will be set in the specie object
*/
void SpecieImp::setName(string newName){
    name = newName;
}

/**
* @brief Get the Name object
* 
* @return string name of the specie object
*/
string SpecieImp::getName(){
    return name;
}

/**
* @brief Set the Habitat object
* 
* @param habitat habitat that will be set
*/
void SpecieImp::setHabitat(string newHabitat){
    habitat = newHabitat;
}

/**
* @brief Get the Habitat object
* 
* @return string habitat of the specie
*/
string SpecieImp::getHabitat(){
    return habitat;
}

/**
* @brief Set the Population object
* 
* @param population population that will be set
*/
void SpecieImp::setPopulation(int newPopulation){
    population = newPopulation;
}

/**
* @brief Get the Population object
* 
* @return int population of the specie
*/
int SpecieImp::getPopulation(){
    return population;
}

/**
* @brief Set the Predator object
* 
* @param predator set if the specie is a predator or not
*/
void SpecieImp::setPredator(bool isPredator){
    predator = isPredator;
}

/**
* @brief Get the Predator object
* 
* @return true the specie is a predator
* @return false the specie isn't a predator
*/
bool SpecieImp::getPredator(){
    return predator;
}

/**
* @brief Set the Near Extinction object
* 
* @param nearExtinction set if the specie is a near extinction or not
*/
void SpecieImp::setNearExtinction(bool isNearExtinction){
    nearExtinction = isNearExtinction;
}

/**
* @brief Get the Near Extinction object
* 
* @return true the specie is near extinction
* @return false the specie isn't near extinction
*/
bool SpecieImp::getNearExtinction(){
    return nearExtinction;
}

/**
* @brief Set the Hunting Target object
* 
* @param huntingTarget set if the specie is a hunting target or not
*/
void SpecieImp::setHuntingTarget(bool isHuntingTarget){
    huntingTarget = isHuntingTarget;
}

/**
* @brief Get the Hunting Target object
* 
* @return true the specie is a hunting target
* @return false the specie isn't a hunting target
*/
bool SpecieImp::getHuntingTarget(){
    return huntingTarget;
}