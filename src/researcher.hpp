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

using namespace std;

/**
 * @brief Class that define an researcher object
 * 
 */
class Researcher{
    public:
        /**
         * @brief Destroy the Researcher object
         * 
         */
        virtual ~Researcher(){};

        /**
         * @brief Set the Name object
         * 
         * @param newName set a new name to the researcher object
         */
        virtual void setName(string newName) = 0;

        /**
         * @brief Get the Name object
         * 
         * @return string actual name of the object
         */
        virtual string getName() = 0;

        /**
         * @brief Set the Password object
         * 
         * @param newPassword set a new object to the researcher object
         */
        virtual void setPassword(string newPassword) = 0;

        /**
         * @brief Get the Password object
         * 
         * @return string actual password of the object
         */
        virtual string getPassword() = 0;

        /**
         * @brief Set the Job object
         * 
         * @param newJob set a new job to the researcher object
         */
        virtual void setJob(string newJob) = 0;

        /**
         * @brief Get the Job object
         * 
         * @return string actual job of the object
         */
        virtual string getJob() = 0;

        /**
         * @brief Set the Working Since object
         * 
         * @param date set a new working since date to the researcher object
         */
        virtual void setWorkingSince(string date) = 0;

        /**
         * @brief Get the Working Since object
         * 
         * @return string actual working since date of the object
         */
        virtual string getWorkingSince() = 0;

        /**
         * @brief Set the access object
         * 
         * @param value set a access to the researcher object
         */
        virtual void setAdmin(bool value) = 0;

        /**
         * @brief get if the object is admin or not
         * 
         * @return true is admin
         * @return false isn't admin
         */
        virtual bool isAdmin() = 0;
};

#endif