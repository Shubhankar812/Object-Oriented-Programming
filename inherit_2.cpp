#include <iostream>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking" << endl;
    }
};
class Human
{
public:
    string colors;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Hybrid : public Animal, public Human
{
    // created a class that inherits from Animal and Human
};
int main()
{
    Hybrid hyb;

    hyb.bark();
    hyb.speak();
}