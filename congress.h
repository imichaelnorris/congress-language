#ifndef CONGRESS_H
#define CONGRESS_H
#include <vector>
#include <string>

namespace congress {
    class Citizen {
    public:
        Citizen();
        Citizen* vote();
        virtual void eval() {}
        std::string name() {
            return "citizen";
        }
        
    };

    std::vector<Citizen*> citizens;

    Citizen::Citizen() {
            citizens.push_back(this);
        }
    
    void run() {
        Citizen * temp;
        short timesRunWithoutEval = 0;
        while (!citizens.empty() || (timesRunWithoutEval < 10)) {
            for (std::vector<Citizen*>::iterator iter = citizens.begin();
                    iter != citizens.end(); ++iter) {
                
            }
            //temp = citizens.back();
            //citizens.pop_back();
            //temp->eval();
        }
    }
}

#endif
