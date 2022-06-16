#ifndef UNITTEST_DATABASE_HPP
#define UNITTEST_DATABASE_HPP

#include "../../src/database.hpp"
#include "../../src/databaseImp.hpp"
#include "../../src/specie.hpp"
#include "../../src/specieImp.hpp"
#include "../../src/researcher.hpp"
#include "../../src/researcherImp.hpp"

void unit_database_destructor();
void unit_database_createSpecie();
void unit_database_createResearcher();
void unit_database_deleteSpecie();
void unit_database_deleteResearcher();
void unit_database_putSpecie();
void unit_database_putResearcher();
void unit_database_getSpecie();
void unit_database_getSpecies();
void unit_database_getResearcher();
void unit_database_getPositionSpecie();
void unit_database_getPositionReasercher();
void unit_database_login();

void run_unit_database();

#endif
