#ifndef TEAM_HPP
#define TEAM_HPP

#include <string>
#include <vector>

using namespace std;

class Researcher{
    public:
        virtual ~Researcher();

        virtual void setName(string newName);
        virtual string getName();
        virtual void setPassword(string newPassword);
        virtual string getPassword();
        virtual void setJob(string newJob);
        virtual string getJob();
        virtual void setWorkingSince(string date);
        virtual string getWorkingSince();

        virtual void setAdmin(bool value);
        virtual bool isAdmin();
};

#endif