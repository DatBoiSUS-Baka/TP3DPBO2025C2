#ifndef BASICMOVE_CPP
#define BASICMOVE_CPP

#include <iostream>
#include <string>

using namespace std;

class BasicMove{
    private:
        string name;
        int duration;
        string difficulty;
    public:
        BasicMove(string name, int duration, string difficulty){
            this->name = name;
            this->duration = duration;
            this->difficulty = difficulty;
        }

        // Setter and Getter
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }

        void setDuration(int duration){
            this->duration = duration;
        }
        int getDuration(){
            return this->duration;
        }

        string getDifficulty(){
            return this->difficulty;
        }
        void setDifficulty(string difficulty){
            this->difficulty = difficulty;
        }

        ~BasicMove(){}
};

#endif