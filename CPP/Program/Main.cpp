#include <iostream>
#include <string>

#include "BasicMove.cpp"
#include "Spin.cpp"
#include "Step.cpp"
#include "Jump.cpp"
#include "Dancer.cpp"

using namespace std;

int main()
{
    string name; cout << "Who is the name of the dancer? "; cin >> name;
    int age; cout << "What is their age? "; cin >> age;
    Dancer dancer1 = Dancer(name, age);

    int n, m, k;
    cout << "How many moves for Spin? "; cin >> n;
    cout << "How many moves for step?"; cin >> m;
    cout << "How many moves for Jump?"; cin >> k;

    string nameTemp;
    int durationTemp;
    string difficultyTemp;
    for (int i = 0; i < n; i++)
    {
        int speedTemp;
        cout << "Move name : "; cin >> nameTemp;
        cout << "Move duration : "; cin >> durationTemp;
        cout << "Move difficulty : "; cin >> difficultyTemp;
        cout << "Move spin speed : "; cin >> speedTemp;
        dancer1.learnSpin(nameTemp, durationTemp, difficultyTemp, speedTemp);
    }
    for (int i = 0; i < m; i++)
    {
        int intensityTemp;
        cout << "Move name : "; cin >> nameTemp;
        cout << "Move duration : "; cin >> durationTemp;
        cout << "Move difficulty : "; cin >> difficultyTemp;
        cout << "Move step intensity : "; cin >> intensityTemp;
        dancer1.learnStep(nameTemp, durationTemp, difficultyTemp, intensityTemp);
    }
    for (int i = 0; i < k; i++)
    {
        int heightTemp;
        cout << "Move name : "; cin >> nameTemp;
        cout << "Move duration : "; cin >> durationTemp;
        cout << "Move difficulty : "; cin >> difficultyTemp;
        cout << "Move jump height : "; cin >> heightTemp;
        dancer1.learnJump(nameTemp, durationTemp, difficultyTemp, heightTemp);
    }


    dancer1.showMoves();

    return 0;
}
