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

#include "../../src/researcher.hpp"
#include "../../src/researcherImp.hpp"

void unit_researcher_constructor();
void unit_researcher_destructor();
void unit_researcher_setName();
void unit_researcher_getName();
void unit_researcher_setPassword();
void unit_researcher_getPassword();
void unit_researcher_setJob();
void unit_researcher_getJob();
void unit_researcher_setWorkingSince();
void unit_researcher_getWorkingSince();
void unit_researcher_setAdmin();
void unit_researcher_isAdmin();

void run_unit_researcher();

#endif