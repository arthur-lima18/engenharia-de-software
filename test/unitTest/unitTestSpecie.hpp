/**
 * @file unitTestSpecie.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef UNITTEST_SPECIE_HPP
#define UNITTEST_SPECIE_HPP

#include "../../src/specieImp.hpp"
#include <assert.h>

///@brief unit test to check if constructor is correctly
void unit_specie_constructor();

///@brief unit test to check if destructor is correctly
void unit_specie_destructor();

///@brief unit test to check if the object is setting a new name correctly
void unit_specie_setName();

///@brief unit test to check if the object is returning actual name correctly
void unit_specie_getName();

///@brief unit test to check if the object is setting a new habitat correctly
void unit_specie_setHabitat();

///@brief unit test to check if the object is returning actual habitat correctly
void unit_specie_getHabitat();

///@brief unit test to check if the object is setting a new population correctly
void unit_specie_setPopulation();

///@brief unit test to check if the object is returning actual population correctly
void unit_specie_getPopulation();

///@brief unit test to check if the object is setting a new predator condition correctly
void unit_specie_setPredator();

///@brief unit test to check if the object is returning actual predator condition correctly
void unit_specie_getPredator();

///@brief unit test to check if the object is setting a new near extinction condition correctly
void unit_specie_setNearExtinction();

///@brief unit test to check if the object is returning actual near extinction condition correctly
void unit_specie_getNearExtinction();

///@brief unit test to check if the object is setting a new hunting target condition correctly
void unit_specie_setHuntingTarget();

///@brief unit test to check if the object is returning actual hunting target condition correctly
void unit_specie_getHuntingTarget();

///@brief run all specie tests
void run_unit_specie();


#endif