/**
 * @file unitTestResearcher.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef UNITTEST_RESEARCHER_HPP
#define UNITTEST_RESEARCHER_HPP

#include "../../src/researcherImp.hpp"
#include <assert.h>

///@brief Unit test of the researcher constructor
void unit_researcher_constructor();

///@brief Unit test of the researcher destructor
void unit_researcher_destructor();

///@brief Unit test to check if is setting the name of a researcher correctly
void unit_researcher_setName();

///@brief Unit test to check if is returning the name of the researcher correctly
void unit_researcher_getName();

///@brief Unit test to check if is setting the password of a researcher correctly
void unit_researcher_setPassword();

///@brief Unit test to check if is returning password of the researcher correctly
void unit_researcher_getPassword();

///@brief Unit test to check if is setting the job of a researcher correctly
void unit_researcher_setJob();

///@brief Unit test to check if is returning job of the researcher correctly
void unit_researcher_getJob();

///@brief Unit test to check if is setting the working since date of a researcher correctly
void unit_researcher_setWorkingSince();

///@brief Unit test to check if is returning working since date of the researcher correctly
void unit_researcher_getWorkingSince();

///@brief Unit test to check if is setting adming access of a researcher correctly
void unit_researcher_setAdmin();

///@brief Unit test to check if is returning access condition of the researcher correctly
void unit_researcher_isAdmin();

///@brief run all unit researcher tests
void run_unit_researcher();


#endif