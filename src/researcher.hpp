#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>

using namespace std;

class Researcher{
    public:
        virtual ~Researcher();

        virtual void setName(string name);
        virtual string getName();
        virtual void setJob(string job);
        virtual string getJob();
        virtual void setWorkingSince(string date);
        virtual string getWorkingSince();

        virtual void acessOn();
        virtual void acessOff();
};

#endif