/**
 * @file researcher.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>
#include <iostream>
#include <assert.h>

using namespace std;

class Researcher{
    public:
        virtual ~Researcher(){};

        virtual void setName(string newName) = 0;
        virtual string getName() = 0;
        virtual void setPassword(string newPassword) = 0;
        virtual string getPassword() = 0;
        virtual void setJob(string newJob) = 0;
        virtual string getJob() = 0;
        virtual void setWorkingSince(string date) = 0;
        virtual string getWorkingSince() = 0;

        virtual void setAdmin(bool value) = 0;
        virtual bool isAdmin() = 0;
};

#endif