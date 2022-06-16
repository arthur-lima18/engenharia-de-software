/**
 * @file unitTestResearcher.cpp
 * @author leandro Libério, Barbara Leticia e Arthur Silva
 * @brief 
 * @version 0.1
 * @date 2022-06-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "unitTestResearcher.hpp"

///@brief Unit test of the researcher constructor
void unit_researcher_constructor(){
    Researcher* user = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);
    
    assert(user->getName() == "Carlos");
    assert(user->getPassword() == "1234");
    assert(user->getJob() == "Coordenador");
    assert(user->getWorkingSince() == "05/04/2022");
    assert(user->isAdmin() == true);

    delete user;
}

///@brief Unit test of the researcher destructor
void unit_researcher_destructor(){ }

///@brief Unit test to check if is setting the name of a researcher correctly
void unit_researcher_setName(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    researcher->setName("Joao");
    assert(researcher->getName() == "Joao");

    delete researcher;
}

///@brief Unit test to check if is returning the name of the researcher correctly
void unit_researcher_getName(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    assert(researcher->getName() == "Carlos");

    delete researcher;
}

///@brief Unit test to check if is setting the password of a researcher correctly
void unit_researcher_setPassword(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    researcher->setPassword("3456");
    assert(researcher->getPassword() == "3456");

    delete researcher;
}

///@brief Unit test to check if is returning password of the researcher correctly
void unit_researcher_getPassword(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    assert(researcher->getPassword() == "1234");

    delete researcher;
}

///@brief Unit test to check if is setting the job of a researcher correctly
void unit_researcher_setJob(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    researcher->setJob("Analista");
    assert(researcher->getJob() == "Analista");

    delete researcher;
}

///@brief Unit test to check if is returning job of the researcher correctly
void unit_researcher_getJob(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    assert(researcher->getJob() == "Coordenador");

    delete researcher;
}

///@brief Unit test to check if is setting the working since date of a researcher correctly
void unit_researcher_setWorkingSince(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    researcher->setWorkingSince("04/05/2022");
    assert(researcher->getWorkingSince() == "04/05/2022");

    delete researcher;
}

///@brief Unit test to check if is returning working since date of the researcher correctly
void unit_researcher_getWorkingSince(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    assert(researcher->getWorkingSince() == "05/04/2022");

    delete researcher;
}

///@brief Unit test to check if is setting adming access of a researcher correctly
void unit_researcher_setAdmin(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    researcher->setAdmin(false);
    assert(researcher->isAdmin() == false);

    delete researcher;
}

///@brief Unit test to check if is returning access condition of the researcher correctly
void unit_researcher_isAdmin(){
    Researcher* researcher = new ResearcherImp("Carlos", "1234", "Coordenador", "05/04/2022", true);

    cout << researcher->isAdmin() << endl;

    assert(researcher->isAdmin() == true);

    delete researcher;
}

///@brief run all unit researcher tests
void run_unit_researcher(){
    unit_researcher_constructor();
    unit_researcher_destructor();
    unit_researcher_setName();
    unit_researcher_getName();
    unit_researcher_setPassword();
    unit_researcher_getPassword();
    unit_researcher_setJob();
    unit_researcher_getJob();
    unit_researcher_setWorkingSince();
    unit_researcher_getWorkingSince();
    unit_researcher_setAdmin();
    unit_researcher_isAdmin();
}