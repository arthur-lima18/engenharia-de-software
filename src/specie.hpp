/**
 * @file specie.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SPECIE_HPP
#define SPECIE_HPP

#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief Class that define an specie object
 * 
 */
class Specie{
    public:
        /**
         * @brief Destroy the Specie object
         * 
         */
        virtual ~Specie(){};

        /**
         * @brief Set the Name object
         * 
         * @param name name that will be set in the specie object
         */
        virtual void setName(string name) = 0;

        /**
         * @brief Get the Name object
         * 
         * @return string name of the specie object
         */
        virtual string getName() = 0;

        /**
         * @brief Set the Habitat object
         * 
         * @param habitat habitat that will be set
         */
        virtual void setHabitat(string habitat) = 0;

        /**
         * @brief Get the Habitat object
         * 
         * @return string habitat of the specie
         */
        virtual string getHabitat() = 0;

        /**
         * @brief Set the Population object
         * 
         * @param population population that will be set
         */
        virtual void setPopulation(int population) = 0;

        /**
         * @brief Get the Population object
         * 
         * @return int population of the specie
         */
        virtual int getPopulation() = 0;

        /**
         * @brief Set the Predator object
         * 
         * @param predator set if the specie is a predator or not
         */
        virtual void setPredator(bool predator) = 0;

        /**
         * @brief Get the Predator object
         * 
         * @return true the specie is a predator
         * @return false the specie isn't a predator
         */
        virtual bool getPredator() = 0;

        /**
         * @brief Set the Near Extinction object
         * 
         * @param nearExtinction set if the specie is a near extinction or not
         */
        virtual void setNearExtinction(bool nearExtinction) = 0;

        /**
         * @brief Get the Near Extinction object
         * 
         * @return true the specie is near extinction
         * @return false the specie isn't near extinction
         */
        virtual bool getNearExtinction() = 0;

        /**
         * @brief Set the Hunting Target object
         * 
         * @param huntingTarget set if the specie is a hunting target or not
         */
        virtual void setHuntingTarget(bool huntingTarget) = 0;

        /**
         * @brief Get the Hunting Target object
         * 
         * @return true the specie is a hunting target
         * @return false the specie isn't a hunting target
         */
        virtual bool getHuntingTarget() = 0;
};

#endif