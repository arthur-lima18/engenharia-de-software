/**
 * @file researcherImp.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TEAMIMP_HPP
#define TEAMIMP_HPP

#include "researcher.hpp"

class ResearcherImp : public Researcher{    
    string name;
    string password;
    string job;
    string workingSince;

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