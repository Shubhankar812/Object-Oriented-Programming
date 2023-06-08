#include <iostream>
using namespace std;

class Hero
{

    // properties
private:
    int health;

public:
    char level;

    // default constructor
    Hero()
    {
        cout << "Constructor called !" << endl;
    }

    // parameterized constructor
    Hero(int ht)
    {
        this->health = ht;
    }
    Hero(int ht, char lvl)
    {
        this->health = ht;
        this->level = lvl;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }

    void setHealth(int ht, string name)
    {
        if (name == "Shubhankar")
        {
            health = ht;
        }
    }
    void setLevel(int lvl)
    {
        level = lvl;
    }
    void print()
    {
        cout << "Health : " << this->health << endl;
        cout << "Level : " << this->level << endl;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        cout << " Copy constructor called !"
             << "\n";
        this->health = temp.health;
        this->level = temp.level;
    }
};
int main()
{
    /*
    // created an object ; static allocation
    Hero ramesh;

    // create an object ; dynamic allocation
    Hero* h = new Hero;

    ramesh.setHealth(90,"Shubhankar");
    ramesh.setLevel('B');

    cout << ramesh.getHealth() << "\n"
         << ramesh.getLevel() << endl;



    Hero h1(95);

    cout<<h1.getHealth()<<endl;
    */

    Hero S(78, 'A');
    S.print();

    // copy constructor
    Hero R(S);
    R.print();
}