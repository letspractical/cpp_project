#include <iostream>
using namespace std;

class record1
{
    int a, b;
    /*---------creating constructor--------*/ /// definition of the constructor.
    // constructor is the member function having same name as of the class.
    // it is used to initialize the objects of its class.
    //it is automatically invoked whenever an object is created.
public:
    record1();             //constructor declaration this is a default parameterized constructor.
    record1(int V);        //single parameterized constructor.
    record1(int V, int B); //double parameterized constructor.
    /* we can declare multiple constructors in a class by just declaring vary numbers of arguements in it, that 
    technique is called constructor overloading*/

    void print() //we can't directly print line into class, we need a function to make it possible which contain that printable statement
    {
        cout << " the value of complex number is " << a << " + " << b << " i" << endl;
    }
};

record1 ::record1()
{
    a = 23; //if we couldn't define thesse parameters then it will take garbage values.
    b = 45;
}
//   record1= record1(int V=8) this is constructor member function containg default argument(v=8);
record1 ::record1( int V )
{
    a = 0; //if we couldn't define thesse parameters then it will take garbage values.
    b = V;
}

record1 ::record1( int V, int B)      //with manually default argument record1 ::record1(int V, int B=any value)
{
    cin>> V; //if we couldn't define thesse parameters then it will take garbage values.
    cin>> B;
    a=V;
    b=B;
}

int main()
{
    record1 r1; //we dont need to invoke constructor member function. as we just decalre an object of the class then constructor will auto
                /*-matically called.*/
    r1.print();
// Implicit call 
    record1 r2(5);
    r2.print();
//explicit call
    record1 r23= record1(4);
    r23.print();

    record1 r3(4,5);
    r3.print();
    //for manually defining default argument in construction we just give one argument w.r.t comment of line 36.
    return 0;
}

/* ---------characterstics of the constructors----------
1, It should be declared in public: methos in class.
2, It is automatically invoked whenever an object is declared.
3, It has not any return value and it doesn't take any type before constructor name.[special character]
4, It can have default arguments but we also can define it mannually
5, we can't refer to their address.
*/

// yes, we can input in constructors very well.