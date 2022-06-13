#ifndef TEAMIMP_HPP
#define TEAMIMP_HPP

#include "researcher.hpp"

class ResearcherImp : public Researcher{    
    string name;
    string password;
    string job;
    string workingSince;

    bool admin;
    bool access;

    static vector<Researcher*> team;

    public:
        ResearcherImp(string name, string password, string job, string workingSince, bool access);
        virtual ~ResearcherImp();

        void setName(string newName);
        string getName();
        void setPassword(string newPassword);
        string getPassword();
        void setJob(string newJob);
        string getJob();
        void setWorkingSince(string date);
        string getWorkingSince();

        void setAdmin(bool value);
        bool isAdmin();
};

#endif