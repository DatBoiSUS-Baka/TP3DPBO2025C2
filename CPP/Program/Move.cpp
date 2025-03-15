#include <iostream>
#include <string>

using namespace std;

class Move{
    private:
        string name;
        int duration; // In seconds
    public:
        Move(string name, int duration){
            this->name = name;
            this->duration = duration;
        }

        // Setter and getter
        string getName(){
            return this->name;
        }
        void setName(string name){
            this->name = name;
        }

        int getDuration(){
            return this->duration;
        }
        void setDuration(int duration){
            this->duration = duration;
        }

        ~Move(){}
};
