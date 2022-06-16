#ifndef UNITTEST_SPECIE_HPP
#define UNITTEST_SPECIE_HPP

#include "../../src/specie.hpp"
#include "../../src/specieImp.hpp"

void unit_specie_constructor();
void unit_specie_destructor();
void unit_specie_setName();
void unit_specie_getName();
void unit_specie_setHabitat();
void unit_specie_getHabitat();
void unit_specie_setPopulation();
void unit_specie_getPopulation();
void unit_specie_setPredator();
void unit_specie_getPredator();
void unit_specie_setNearExtinction();
void unit_specie_getNearExtinction();
void unit_specie_setHuntingTarget();
void unit_specie_getHuntingTarget();

void run_unit_specie();

#endif