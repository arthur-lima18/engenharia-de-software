#include "functionalTest.hpp"

void FunctionalTest::functionalTest(){
    Specie* specie = new SpecieImp("Jacare-açu", "Pequenos rios", 2500, true, false, false);
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new Database();

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

    Specie* updateSpecie = new SpecieImp("Jacare-açu", "Pequenos rios", 1300, true, true, true);

    database->putSpecie(updateSpecie);

    int positionSpecie = database->getPositionSpecie("Jacare-açu");
    Specie* newSpecie = database->getSpecie(positionSpecie);

    assert(newSpecie->getName() == "Jacare-açu");
    assert(newSpecie->getHabitat() == "Pequenos rios");
    assert(newSpecie->getPopulation() == 1300);
    assert(newSpecie->getPredator() == true);
    assert(newSpecie->getNearExtinction() == true);
    assert(newSpecie->getHuntingTarget() == true);
    
    assert(database->getSpecies().size() == 1);
    database->deleteSpecie();
    assert(database->getSpecies().size() == 0);

    delete specie;
    delete newSpecie;
    delete updateSpecie;
    delete researcher; 
    delete user; 
    delete database; 
}