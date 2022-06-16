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

ResearcherImp::ResearcherImp(string initialName, string initialPassword, string initialJob, string timeWorkingSince, bool initialAccess){
    name = initialName;
    password = initialPassword;
    job = initialJob;
    workingSince = timeWorkingSince;
    access = initialAccess;
}

ResearcherImp::~ResearcherImp(){}

void ResearcherImp::setName(string newName){
    name = newName;
}

string ResearcherImp::getName(){
    return name;
}

void ResearcherImp::setPassword(string newPassword){
    password = newPassword;
}

string ResearcherImp::getPassword(){
    return password;
}


void ResearcherImp::setJob(string newJob){
    job = newJob;
}

string ResearcherImp::getJob(){
    return job;
}

void ResearcherImp::setWorkingSince(string date){
    workingSince = date;
}

string ResearcherImp::getWorkingSince(){
    return workingSince;
}

void ResearcherImp::setAdmin(bool value){
    access = value;
}

bool ResearcherImp::isAdmin(){
    return access;
}

