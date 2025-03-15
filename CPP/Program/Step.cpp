#ifndef STEP_CPP
#define STEP_CPP

#include <string>
#include "BasicMove.cpp"
using namespace std;

class Step : public BasicMove{
    private:
        int stepIntensity; // 1 = low, 2 = medium, 3 = high
    public:
        Step(string name, int duration, string difficulty, int intensity) : BasicMove(name, duration, difficulty){
            this->stepIntensity = intensity;
        }

        void setStepIntensity(int intensity){
            this->stepIntensity = intensity;
        }
        int getStepIntensity(){
            return this->stepIntensity;
        }

        ~Step(){}
};

#endif