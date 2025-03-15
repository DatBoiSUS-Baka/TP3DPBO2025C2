#ifndef DANCER_CPP
#define DANCER_CPP

#include <iostream>
#include <string>
#include <vector>

#include "Spin.cpp"
#include "Step.cpp"
#include "Jump.cpp"

using namespace std;

class Dancer{
    private:
        string nameDancer;
        int ageDancer;
        vector<Spin> spinMove;
        vector<Step> stepMove;
        vector<Jump> jumpMove;

    public:

    Dancer(string name, int age){
        this->nameDancer = name;
        this->ageDancer = age;
    };

    // Setter and Getter
    void setNameDancer(string name){
        this->nameDancer = name;
    }
    string getNameDancer(){
        return this->nameDancer;
    }

    void setAgeDancer(int age){
        this->ageDancer = age;
    }
    int getAgeDancer(){
        return this->ageDancer;
    }

    void learnSpin(string name, int duration, string difficulty, int speed){
        this->spinMove.push_back(Spin(speed, name, duration, difficulty));
        cout << name << " has been learned" << " by " << this->nameDancer << "!" << endl;
    }
    void learnStep(string name, int duration, string difficulty, int intensity){
        this->stepMove.push_back(Step(name, duration, difficulty, intensity));
        cout << name << " has been learned by " << this->nameDancer << "!" << endl;
    }
    void learnJump(string name, int duration, string difficulty, int height){
        this->jumpMove.push_back(Jump(name, duration, difficulty, height));
        cout << name << " has been learned by " << this->nameDancer << "!" << endl;
    }

    void showMoves(){
        cout << endl;
        cout << this->nameDancer << " has learned: " << endl;
        for (int i = 0; i < spinMove.size(); i++)
        {
            cout << "- " << spinMove[i].getName() << " "<< spinMove[i].getDuration() << " seconds with " << spinMove[i].getSpinSpeed() << " rpm" << endl;
        }
        for (int i = 0; i < stepMove.size(); i++)
        {
            cout << "- " << stepMove[i].getName() << " " << stepMove[i].getDuration() << " seconds with intensity of " << stepMove[i].getStepIntensity() << endl;
        }
        for (int i = 0; i < jumpMove.size(); i++)
        {
            cout << "- " << jumpMove[i].getName() << " " << jumpMove[i].getDuration() << " seconds with height of " << jumpMove[i].getJumpHeight() << "cm" << endl;
        }
    }

    ~Dancer(){}

};

#endif