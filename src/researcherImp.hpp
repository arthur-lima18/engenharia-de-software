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

/**
 * @brief Class that implementes an researcher object
 * 
 */
class ResearcherImp : public Researcher{ 

    ///@brief name of the researcher
    string name;

    ///@brief password of the researcher
    string password;

    ///@brief job of the researcher
    string job;

    ///@brief working since date of the researcher
    string workingSince;
    ///@brief name of the researcher
    bool access;

    public:

        /**
         * @brief Construct a new Researcher Imp object
         * 
         * @param name initial name
         * @param password initial password
         * @param job initial job
         * @param workingSince initial working since date
         * @param access initial access condition
         */
        ResearcherImp(string name, string password, string job, string workingSince, bool access);

        /**
         * @brief Destroy the Researcher object
         * 
         */
        virtual ~ResearcherImp();

        /**
         * @brief Set the Name object
         * 
         * @param newName set a new name to the researcher object
         */
        void setName(string newName);

        /**
         * @brief Get the Name object
         * 
         * @return string actual name of the object
         */
        string getName();

        /**
         * @brief Set the Password object
         * 
         * @param newPassword set a new object to the researcher object
         */
        void setPassword(string newPassword);

        /**
         * @brief Get the Password object
         * 
         * @return string actual password of the object
         */
        string getPassword();

        /**
         * @brief Set the Job object
         * 
         * @param newJob set a new job to the researcher object
         */
        void setJob(string newJob);

        /**
         * @brief Get the Job object
         * 
         * @return string actual job of the object
         */
        string getJob();

        /**
         * @brief Set the Working Since object
         * 
         * @param date set a new working since date to the researcher object
         */
        void setWorkingSince(string date);

        /**
         * @brief Get the Working Since object
         * 
         * @return string actual working since date of the object
         */
        string getWorkingSince();

        /**
         * @brief Set the access object
         * 
         * @param value set a access to the researcher object
         */
        void setAdmin(bool value);

        /**
         * @brief get if the object is admin or not
         * 
         * @return true is admin
         * @return false isn't admin
         */
        bool isAdmin();


};

#endif