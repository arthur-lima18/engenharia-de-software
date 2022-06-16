#include "unitTestSpecie.hpp"

void unit_specie_constructor(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);
    
    assert(specie->getName() == "Jacare-acu");
    assert(specie->getHabitat() == "Pequenos rios");
    assert(specie->getPopulation() == 1300);
    assert(specie->getPredator() == true);
    assert(specie->getNearExtinction() == false);
    assert(specie->getHuntingTarget() == false);

    delete specie;
}

void unit_specie_destructor(){ }

void unit_specie_setName(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setName("Jacare");
    assert(specie->getName() == "Jacare");

    delete specie;
}

void unit_specie_getName(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getName() == "Jacare-acu");

    delete specie;
}

void unit_specie_setHabitat(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setHabitat("Savana");
    assert(specie->getHabitat() == "Savana");

    delete specie;
}

void unit_specie_getHabitat(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getHabitat() == "Pequenos rios");

    delete specie;
}

void unit_specie_setPopulation(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setPopulation(1300);
    assert(specie->getPopulation() == 1300);

    delete specie;
}

void unit_specie_getPopulation(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getPopulation() == 2500);

    delete specie;
}

void unit_specie_setPredator(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setPredator(false);
    assert(specie->getPredator() == false);

    delete specie;
}

void unit_specie_getPredator(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getPredator() == true);

    delete specie;
}

void unit_specie_setNearExtinction(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setNearExtinction(true);
    assert(specie->getNearExtinction() == true);

    delete specie;
}

void unit_specie_getNearExtinction(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getNearExtinction() == false);

    delete specie;
}

void unit_specie_setHuntingTarget(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    specie->setHuntingTarget(true);
    assert(specie->getHuntingTarget() == true);

    delete specie;
}

void unit_specie_getHuntingTarget(){
    Specie* specie = new SpecieImp("Jacare-acu", "Pequenos rios", 2500, true, false, false);

    assert(specie->getHuntingTarget() == false);

    delete specie;
}

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
