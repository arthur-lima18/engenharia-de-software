/**
 * @file specieImp.hpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef SPECIEIMP_HPP
#define SPECIEIMP_HPP

#include "specie.hpp"

/**
 * @brief Class that implementes an specie object
 * 
 */
class SpecieImp : public Specie{

    ///@brief name of the specie
    string name;

    ///@brief habitat of the specie
    string habitat;

    ///@brief population of the specie
    int population;

    ///@brief bool that defines if the specie is a predator
    bool predator;

    ///@brief bool that defines if the specie is near extinction
    bool nearExtinction;

    ///@brief bool that defines if the specie is a hunting target
    bool huntingTarget;

    public:

        /**
         * @brief Construct a new Specie Imp object
         * 
         * @param initialName initial name
         * @param hab initial habitat
         * @param pop initial population
         * @param pred initial predator condition
         * @param ext initial near extinction condition
         * @param ht initial hunting target condition
         */
        SpecieImp(string initialName, string hab, int pop, bool pred, bool ext, bool ht);

        /**
         * @brief Destroy the Specie Imp object
         * 
         */
        virtual ~SpecieImp();

        /**
         * @brief Set the Name object
         * 
         * @param name name that will be set in the specie object
         */
        void setName(string newName);

        /**
         * @brief Get the Name object
         * 
         * @return string name of the specie object
         */
        string getName();

        /**
         * @brief Set the Habitat object
         * 
         * @param habitat habitat that will be set
         */
        void setHabitat(string newHabitat);

        /**
         * @brief Get the Habitat object
         * 
         * @return string habitat of the specie
         */
        string getHabitat();

        /**
         * @brief Set the Population object
         * 
         * @param population population that will be set
         */
        void setPopulation(int newPopulation);

        /**
         * @brief Get the Population object
         * 
         * @return int population of the specie
         */
        int getPopulation();

        /**
         * @brief Set the Predator object
         * 
         * @param predator set if the specie is a predator or not
         */
        void setPredator(bool isPredator);

        /**
         * @brief Get the Predator object
         * 
         * @return true the specie is a predator
         * @return false the specie isn't a predator
         */
        bool getPredator();

        /**
         * @brief Set the Near Extinction object
         * 
         * @param nearExtinction set if the specie is a near extinction or not
         */
        void setNearExtinction(bool isNearExtinction);

        /**
         * @brief Get the Near Extinction object
         * 
         * @return true the specie is near extinction
         * @return false the specie isn't near extinction
         */
        bool getNearExtinction();

        /**
         * @brief Set the Hunting Target object
         * 
         * @param huntingTarget set if the specie is a hunting target or not
         */
        void setHuntingTarget(bool isHuntingTarget);

        /**
         * @brief Get the Hunting Target object
         * 
         * @return true the specie is a hunting target
         * @return false the specie isn't a hunting target
         */
        bool getHuntingTarget();
    
};

#endif