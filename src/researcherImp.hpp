#ifndef TEAMIMP_HPP
#define TEAMIMP_HPP

#include "researcher.hpp"

class ResearcherImp : public Researcher{    
    string name;
    string job;
    string workingSince;

    bool access;

    static vector<Researcher*> team;

    public:
        ResearcherImp(string name, string job, string workingSince, bool access);
        virtual ~ResearcherImp();

        void setName(string name);
        string getName();
        void setJob(string job);
        string getJob();
        void setWorkingSince(string date);
        string getWorkingSince();

        void accessOn();
        void accessOff();
};

#endif