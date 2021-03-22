// copy constructor is the way through which we can copy the first constructor's function into another construction by the use of the
// object reference pass as the argument.l

#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number() //necessary to make a default constructer to run secondary constructor
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }

    number(number &obj) //copy constructor is defined inside the class
    {
        cout << "copy constructor is called !!!" << endl;
        a = obj.a;
    }

    void display()
    {
        cout << "the number of this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(45), /* z1*/;
    x.display();
    y.display();
    z.display();
    number z1(x); /*as we know that when ever we create an object then a constructor of the class is initiate, so we just have 
also declare an object reference 'x' to that copy constructor which activate when we create an object z1.
    -------1. we can perform copy constructor by this,because all declaration is performed in just one line

              display z1=z; *****this wil perform copy constructor.


    -------2. if assigning the objects to constructor which is make before then the it 'll not perform copy construction 

              z1=z;   *************this  willn't perform copy constructor.
    */

    z1.display();
    number z2(z);
    z2.display();
    return 0;
    /* compiler perform copy constructor task even if we have not write any script for copy construction but 
    assigne the object in another constructor, this happen becsuse compiler automatically make a copy constructor*/
    /*thats why when we comment out the script but assign the object then it perform the copy constructor task*/
}