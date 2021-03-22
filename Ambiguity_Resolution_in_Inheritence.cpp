/*In this programm we are going to discuss ambiguity when an object call the common name function of 
  the different classes.*/

/* A,B,C are the base classes of the drive class.*/
#include <iostream>
using namespace std;

class A
{
public:
    void voice()
    {
        cout << "hello boys!!!\n";
    }
};

class B
{
public:
    void voice()
    {
        cout << "hello girls!!!\n";
    }
};

class C
{
public:
    void voice()
    {
        cout << "hellow ladies and gentleman!!!\n";
    }
};
/* ambiguity arises , when more than one class contain same name members of the class.
          the problem arises when drived class's object is calling the member at that time compiler get stucks,
          because it cann't understand of which class's member has been called by the object of the drived class.*/

class drive : public A, public B, public C
{
    public:
    void voice() //this is how we tackle ambiguity, by just specify that which class's voice object need to call.
    {
        C ::voice();
    }
};

int main()
{
    A a1;
    a1 . voice();
    B b1;
    b1 . voice();
    drive d1;
    d1 . voice(); // this function is belongs to class C which we have call in the drive class inside the voice() of
    return 0;     //the class drive.
}