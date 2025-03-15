#ifndef SPIN_CPP
#define SPIN_CPP
#include <iostream>
#include <string>

#include "BasicMove.cpp"

using namespace std;

class Spin : public BasicMove{
    private:
        int spinSpeed; //Rotation per minute
    public:
        Spin(int speed, string name, int duration, string difficulty) : BasicMove(name, duration, difficulty){}

        void setSpinSpeed(int speed){
            this->spinSpeed = speed;
        }
        int getSpinSpeed(){
            return this->spinSpeed;
        }

        ~Spin(){}
};

#endif