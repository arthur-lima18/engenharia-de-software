/**
 * @file researcherImp.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "researcherImp.hpp"

/**
* @brief Construct a new Researcher Imp object
* 
* @param name initial name
* @param password initial password
* @param job initial job
* @param workingSince initial working since date
* @param access initial access condition
*/
ResearcherImp::ResearcherImp(string initialName, string initialPassword, string initialJob, string timeWorkingSince, bool initialAccess){
    name = initialName;
    password = initialPassword;
    job = initialJob;
    workingSince = timeWorkingSince;
    access = initialAccess;
}

/**
* @brief Destroy the Researcher object
* 
*/
ResearcherImp::~ResearcherImp(){}

/**
* @brief Set the Name object
* 
* @param newName set a new name to the researcher object
*/
void ResearcherImp::setName(string newName){
    name = newName;
}

/**
* @brief Get the Name object
* 
* @return string actual name of the object
*/
string ResearcherImp::getName(){
    return name;
}

/**
* @brief Set the Password object
* 
* @param newPassword set a new object to the researcher object
*/
void ResearcherImp::setPassword(string newPassword){
    password = newPassword;
}

/**
* @brief Get the Password object
* 
* @return string actual password of the object
*/
string ResearcherImp::getPassword(){
    return password;
}

/**
* @brief Set the Job object
* 
* @param newJob set a new job to the researcher object
*/
void ResearcherImp::setJob(string newJob){
    job = newJob;
}

/**
* @brief Get the Job object
* 
* @return string actual job of the object
*/
string ResearcherImp::getJob(){
    return job;
}

/**
* @brief Set the Working Since object
* 
* @param date set a new working since date to the researcher object
*/
void ResearcherImp::setWorkingSince(string date){
    workingSince = date;
}

/**
* @brief Get the Working Since object
* 
* @return string actual working since date of the object
*/
string ResearcherImp::getWorkingSince(){
    return workingSince;
}

/**
* @brief Set the access object
* 
* @param value set a access to the researcher object
*/
void ResearcherImp::setAdmin(bool value){
    access = value;
}

/**
* @brief get if the object is admin or not
* 
* @return true is admin
* @return false isn't admin
*/
bool ResearcherImp::isAdmin(){
    return access;
}

