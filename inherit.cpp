#include <iostream>
using namespace std;
class human
{

public:
    int weight;

protected:
    int height;

protected:
    int age;

public:
    int getAge()
    {
        return age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
    void print()
    {
        cout << "Done !" << endl;
    }
};

class Male : protected human
{

public:
    string color;
    void sleep()
    {
        cout << "Sleeping" << endl;
    }
    int getHeight()
    {
        return this->height;
    }
};
int main()
{
    Male obj1;
    // obj1.setWeight(90);

    // cout<<obj1.age<<endl;
    // cout << obj1.weight << endl;
    // cout << obj1.getHeight() << endl;

    // cout << obj1.color << endl;

    obj1.sleep();
    // obj1.print();
}