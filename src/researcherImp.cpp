#include "researcherImp.hpp"

vector<Researcher*> ResearcherImp::team;

ResearcherImp::ResearcherImp(string name, string job, string workingSince, bool access){
    this->name = name;
    this-> job = job;
    this->workingSince = workingSince;
    this->access = access;
}

ResearcherImp::~ResearcherImp(){}

void ResearcherImp::setName(string name){
    this->name = name;
}

string ResearcherImp::getName(){
    return this->name;
}

void ResearcherImp::setJob(string job){
    this->job = job;
}

string ResearcherImp::getJob(){
    return this->job;
}

void ResearcherImp::setWorkingSince(string date){
    this->workingSince = date;
}

string ResearcherImp::getWorkingSince(){
    return this->workingSince;
}

void ResearcherImp::accessOn(){
    this->access = true;
}

void ResearcherImp::accessOff(){
    this->access = false;
}