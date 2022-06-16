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


#include "../../src/databaseImp.hpp"
#include <assert.h>

///@brief Unit test of the database destructor
void unit_database_destructor();

///@brief Unit test to check if database is creating a specie correctly
void unit_database_createSpecie();

///@brief Unit test to check if database is creating a researcher correctly
void unit_database_createResearcher();

///@brief Unit test to check if database is updating a specie correctly
void unit_database_putSpecie();

///@brief Unit test to check if database is updating a researcher correctly
void unit_database_putResearcher();

///@brief Unit test to check if database is returning a specie correctly
void unit_database_getSpecie();

///@brief Unit test to check if database is returning a researcher correctly
void unit_database_getResearcher();

///@brief Unit test to check if database is returning a the position of a specie correctly
void unit_database_getPositionSpecie();

///@brief Unit test to check if database is returning a the position of a researcher correctly
void unit_database_getPositionResearcher();

///@brief Unit test to check if database is validating a researcher user correctly
void unit_database_login();

///@brief run all unit tests of the database
void run_unit_database();

#endif
