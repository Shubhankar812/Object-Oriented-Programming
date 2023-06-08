#include <iostream>
using namespace std;

class A {
   public:
    void fun() {
        cout<<"I am in A"<<endl;
    }
};
class B {
    public:
      void fun() {
        cout<<"I am in B"<<endl; 
      }
};
class C : public A, public B {
  public:
      void fun() {
        cout<<"I am in C"<<endl; 
      }
};
int main()
{
    C obj;
    obj.A::fun();
    obj.B::fun();
    obj.C::fun();
    
}