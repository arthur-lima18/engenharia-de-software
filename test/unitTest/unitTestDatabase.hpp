/**
 * @file unitTestDatabase.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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
void unit_database_putSpecie();
void unit_database_putResearcher();
void unit_database_getSpecie();
void unit_database_getResearcher();
void unit_database_getPositionSpecie();
void unit_database_getPositionResearcher();
void unit_database_login();

void run_unit_database();

#endif
