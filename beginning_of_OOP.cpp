#include <iostream>
#include <string>
using namespace std;

// from today we are using oop programming.
//main reason was to develop oop paradigam, c has structure which members was completely public and we can't define methods in it.
//to overcome that drawback c++ was associate with oop concept.
//oop contain classes and object way at where classes acts like structure of c-language but with inhance version in c++,
//which contain methods and also facilitate to makes its members public and privite.
//we are learning about classes and objects.
//class--> classes have previously called with c with classes.
//class--> classes are the templates/structures which contain properties.
// classes--> structures are in c++ typedefed.
//we can declare objects along with the class definition.
/*      example;    class emplyee
                     {
                          statements;
                     } object1,object2,....;  */  //this is another way to declare objects in c++ */.
 // this kind of statements ( class.variable = N ) are not valid if variable(variable) is privite in parent class.                    

class binary
{
    string s; // by default it is privite in class 

public:
    void read();
    void check();
    void ones_complement();
    void display();
};

void binary :: read() //by using scope resolution operator we are defining the function read() of class binary
{
    cout << "enter the string: ";
    cin >> s;
}

void binary :: check() //defining check function of class binary
{
    /*this operation contain nesting of the control statements*/
    for (int i = 0; i < s.length(); i++) //for loop is used to run the operation to every digit of the string.
    {

        if (s.at(i) = '0' || s.at(i) == '1') //this control statement actually defining the checking of the string s.
        {
            cout << "\n string is binary let it pass" << endl;
        exit(0);
        }
    }
}

void binary :: ones_complement() //defining one_s_complement() of class binary.
{
  //this is the concept of nesting member function. /*this operation contain nesting of the control statements*/

    for ( int i = 0; i < s.length(); i++ ) //for loop is used to run the operation to every digit of the string.
    {
        if(s.at(i) == '0') //this control statement actually defining the checking of the string s.
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    
}

void binary :: display()
{
    cout << "displaying your string ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary r; //creating object of class binary
    r.read(); //object calling read()
    r.display();
    r.check();
    r.ones_complement();
    r.display();
}