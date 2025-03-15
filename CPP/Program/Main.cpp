#include <iostream>
#include <string>

#include "Dancer.cpp"

int main()
{
    string name; cout << "Who is the name of the dancer? "; cin >> name;
    int age; cout << "What is their age? "; cin >> age;
    Dancer dancer1 = Dancer("Jeong Yun Ho", 26);

    int n; cout << "How many moves in a routine? "; cin >> n;


    return 0;
}
