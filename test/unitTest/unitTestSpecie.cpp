/**
 * @file unitTestSpecie.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "unitTestSpecie.hpp"

///@brief unit test to check if constructor is correctly
void unit_specie_constructor(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    
    assert(specie->getName() == "Jacare-acu");
    assert(specie->getHabitat() == "Pequenos rios");
    assert(specie->getPopulation() == 2500);
    assert(specie->getPredator() == true);
    assert(specie->getNearExtinction() == false);
    assert(specie->getHuntingTarget() == false);

    delete specie;
}

///@brief unit test to check if destructor is correctly
void unit_specie_destructor(){ }

///@brief unit test to check if the object is setting a new name correctly
void unit_specie_setName(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setName("Jacare");
    assert(specie->getName() == "Jacare");

    delete specie;
}

///@brief unit test to check if the object is returning actual name correctly
void unit_specie_getName(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getName() == "Jacare-acu");

    delete specie;
}

///@brief unit test to check if the object is setting a new habitat correctly
void unit_specie_setHabitat(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setHabitat("Savana");
    assert(specie->getHabitat() == "Savana");

    delete specie;
}

///@brief unit test to check if the object is returning actual habitat correctly
void unit_specie_getHabitat(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getHabitat() == "Pequenos rios");

    delete specie;
}

///@brief unit test to check if the object is setting a new population correctly
void unit_specie_setPopulation(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setPopulation(1300);
    assert(specie->getPopulation() == 1300);

    delete specie;
}

///@brief unit test to check if the object is returning actual population correctly
void unit_specie_getPopulation(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getPopulation() == 2500);

    delete specie;
}

///@brief unit test to check if the object is setting a new predator condition correctly
void unit_specie_setPredator(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setPredator(false);
    assert(specie->getPredator() == false);

    delete specie;
}

///@brief unit test to check if the object is returning actual predator condition correctly
void unit_specie_getPredator(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getPredator() == true);

    delete specie;
}

///@brief unit test to check if the object is setting a new near extinction condition correctly
void unit_specie_setNearExtinction(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setNearExtinction(true);
    assert(specie->getNearExtinction() == true);

    delete specie;
}

///@brief unit test to check if the object is returning actual near extinction condition correctly
void unit_specie_getNearExtinction(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getNearExtinction() == false);

    delete specie;
}

///@brief unit test to check if the object is setting a new hunting target condition correctly
void unit_specie_setHuntingTarget(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setHuntingTarget(true);
    assert(specie->getHuntingTarget() == true);

    delete specie;
}

///@brief unit test to check if the object is returning actual hunting target condition correctly
void unit_specie_getHuntingTarget(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getHuntingTarget() == false);

    delete specie;
}

///@brief run all specie tests
void run_unit_specie(){
    unit_specie_constructor();
    unit_specie_destructor();
    unit_specie_setName();
    unit_specie_getName();
    unit_specie_setHabitat();
    unit_specie_getHabitat();
    unit_specie_setPopulation();
    unit_specie_getPopulation();
    unit_specie_setPredator();
    unit_specie_getPredator();
    unit_specie_setNearExtinction();
    unit_specie_getNearExtinction();
    unit_specie_setHuntingTarget();
    unit_specie_getHuntingTarget();
}
