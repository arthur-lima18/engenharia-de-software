#include "unitTestDatabase.hpp"

void unit_database_destructor(){ }

void unit_database_createSpecie(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    Database* database = new DatabaseImp();

    database->createSpecie(specie);

    int positionSpecie = database->getPositionSpecie("Jacare-acu");
    SpecieImp* newSpecie = database->getSpecie(positionSpecie);

    assert(newSpecie->getName() == "Jacare-acu");

    delete database;
}

void unit_database_createResearcher(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    database->createResearcher(researcher);
    
    int positionReasearcher = database->getPositionReasearcher("Carlos");
    SpecieImp* newResearcher = database->getResearcher(positionReasearcher);

    assert(newResearcher->getName() == "Carlos");

    delete database;
}

void unit_database_deleteSpecie(){
    Database* database = new DatabaseImp();
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(database->getSpecies().size() == 1);
    database->deleteSpecie("Jacare-acu");
    assert(database->getSpecies().size() == 0);

    delete database;
}

void unit_database_putSpecie(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    Database* database = new DatabaseImp();

    Specie* updateSpecie = new SpecieImp("Jacare-acu", "Pequenos rios", 1300, true, true, true);

    database->putSpecie(updateSpecie);

    assert(updateSpecie->getName() == "Jacare-acu");
    assert(updateSpecie->getHabitat() == "Pequenos rios");
    assert(updateSpecie->getPopulation() == 1300);
    assert(updateSpecie->getPredator() == true);
    assert(updateSpecie->getNearExtinction() == true);
    assert(updateSpecie->getHuntingTarget() == true);

    delete database;
}

void unit_database_putResearcher(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    Researcher* updateResearcher = new ResearcherImp("Joao", "3456", "Analista", "04/05/2022", false);

    database->putResearcher(updateResearcher);

    assert(updateResearcher->getName() == "Joao");
    assert(updateResearcher->getPassword() == "3456");
    assert(updateResearcher->getJob() == "Analista");
    assert(updateResearcher->getWorkingSince() == "04/05/2022");
    assert(updateResearcher->isAdmin() == false);

    delete database;
}

void unit_database_getSpecie(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    Database* database = new DatabaseImp();

    database->createSpecie(specie);

    int positionSpecie = database->getPositionSpecie("Jacare-acu");
    assert(database->getSpecie(positionSpecie) == "Jacare-acu");

    delete database;
}

void unit_database_getResearcher(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    database->createResearcher(researcher);

    int positionResearcher = database->getPositionResearcher("Carlos");
    assert(database->getResearcher(positionResearcher) == "Carlos");

    delete database;
}

void unit_database_getPositionSpecie(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    Database* database = new DatabaseImp();

    database->createSpecie(specie);

    assert(database->getPositionSpecie("Jacare-acu") == 0);

    delete database;
}

void unit_database_getPositionReasearcher(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    database->createReasearcher(researcher);

    assert(database->getPositionReasearcher("Carlos") == 0);

    delete database;
}

void unit_database_login(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    Database* database = new DatabaseImp();

    database->createResearcher(researcher);
    
    int login = database->login(researcher->getName(), researcher->getPassword());

    assert(login != -1);

    delete database;
}

void run_unit_database(){
    unit_database_destructor();
    unit_database_createSpecie();
    unit_database_createResearcher();
    unit_database_deleteSpecie();
    unit_database_deleteResearcher();
    unit_database_putSpecie();
    unit_database_putResearcher();
    unit_database_getSpecie();
    unit_database_getSpecies();
    unit_database_getResearcher();
    unit_database_getPositionSpecie();
    unit_database_getPositionReasercher();
    unit_database_login();
}