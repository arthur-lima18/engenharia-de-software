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
#include <assert.h>

using namespace std;

class Specie{
    public:
        virtual ~Specie(){};

        virtual void setName(string name) = 0;
        virtual string getName() = 0;
        virtual void setHabitat(string habitat) = 0;
        virtual string getHabitat() = 0;
        virtual void setPopulation(int population) = 0;
        virtual int getPopulation() = 0;
        virtual void setPredator(bool predator) = 0;
        virtual bool getPredator() = 0;
        virtual void setNearExtinction(bool nearExtinction) = 0;
        virtual bool getNearExtinction() = 0;
        virtual void setHuntingTarget(bool huntingTarget) = 0;
        virtual bool getHuntingTarget() = 0;
};

#endif