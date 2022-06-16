/**
 * @file functionalTest.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "functionalTest.hpp"
#include "../../src/researcherImp.hpp"
#include "../../src/specieImp.hpp"

void functionalTest(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    database->createSpecie(specie);
    database->createResearcher(researcher);

    int login = database->login(researcher->getName(), researcher->getPassword());

    if(login == -1)
        return;
    
    Researcher* user = database->getResearcher(login);
    
    assert(user->getName() == "Carlos");
    assert(user->getPassword() == "1234");
    assert(user->getJob() == "Coordenador");
    assert(user->getWorkingSince() == "05/04/2022");
    assert(user->isAdmin() == true);

    Specie* updateSpecie = new SpecieImp("Jacare-acu", "Pequenos rios", 1300, true, true, true);

    database->putSpecie(updateSpecie);

    int positionSpecie = database->getPositionSpecie("Jacare-acu");
    Specie* newSpecie = database->getSpecie(positionSpecie);

    assert(newSpecie->getName() == "Jacare-acu");
    assert(newSpecie->getHabitat() == "Pequenos rios");
    assert(newSpecie->getPopulation() == 1300);
    assert(newSpecie->getPredator() == true);
    assert(newSpecie->getNearExtinction() == true);
    assert(newSpecie->getHuntingTarget() == true);

    delete specie;
    delete newSpecie;
    delete updateSpecie;
    delete researcher; 
    delete user; 
    delete database; 
}