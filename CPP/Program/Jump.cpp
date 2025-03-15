#ifndef JUMP_CPP
#define JUMP_CPP
#include "BasicMove.cpp"

#include <string>

using namespace std;

class Jump : public BasicMove{
    private:
        int jumpHeight; // in cm
    public:
        Jump(string name, int duration, string difficulty, int height) : BasicMove(name, duration, difficulty){
            this->jumpHeight = height;
        }

        void setJumpHeight(int height){
            this->jumpHeight = height;
        }
        int getJumpHeight(){
            return this->jumpHeight;
        }

        ~Jump(){}
};