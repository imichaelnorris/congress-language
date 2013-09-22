#include <iostream>
#include <iterator>
#include "congress.h"

class SlowJob : public congress::Citizen {
    public:
    congress::Citizen * vote() {
        std::cout << congress::citizens.size() << std::endl;
    }

    void eval() {
        std::cout << "SlowJob" << std::endl;
    }
};

class FastJob : public congress::Citizen {
    public:
    congress::Citizen * vote() {
        for (std::vector<Citizen*>::iterator iter = congress::citizens.begin();
                iter != congress::citizens.end(); iter++)
            if ((*iter)->name() == "fastjob")
                std::cout << (*iter)->name() << std::endl;
    }

    std::string name() {
        return "fastjob";
    }

    void eval() {
        std::cout << "FastJob" << std::endl;
    }
};


int main()
{
    congress::Citizen* temp;

    for (int i = 0; i < 3; ++i)
        new SlowJob();

    for (int i = 0; i < 3; ++i)
        new FastJob();
         
         
    congress::run();
}
