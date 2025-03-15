#include <iostream>
#include <string>
#include <vector>

#include "BasicMove.cpp"

using namespace std;

class Dancer{
    private:
        string nameDancer;
        int ageDancer;
        vector<BasicMove> knownMoves;
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

    void learnBasicMove(BasicMove move){
        this->knownMoves.push_back(move);
    }
    void showLearntMoves(){
        cout << this->nameDancer << " has learned: " << endl;
        for (int i = 0; i < knownMoves.size(); i++)
        {
            cout << "- " << knownMoves[i].getName() << endl;
        }
        
    }

    ~Dancer(){}

};