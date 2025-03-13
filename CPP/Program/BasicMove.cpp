#include "Move.cpp";

class BasicMove : public Move{
    private:
        string moveType;
        string difficulty;
    public:
        BasicMove(string name, int duration, string type, string difficulty) : Move(name, duration){
            this->moveType = type;
            this->difficulty = difficulty;
        }

        // Setter and Getter
        string getMoveType(){
            return this->moveType;
        }
        void setMoveType(string type){
            this->moveType = type;
        }

        string getDifficulty(){
            return this->difficulty;
        }
        void setDifficulty(string difficulty){
            this->difficulty = difficulty;
        }

        ~BasicMove(){}
};