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
    admin = value;
}

bool ResearcherImp::isAdmin(){
    if(admin)
        return true;

    return false;
}

