 //Lets learning Inheritance



#include <iostream>
using namespace std;

class Employee //parent class
{
    //------------< private members--------
    int salary = 100; //------------'''''''''''''''''--------
    
public:               //------------'''''''''''''''''--------

     int id;
    Employee(int E_id)
    {
        
        id = E_id;
        cout << "the id of an Employee is " << id << endl;
        cout << "the salary of an Employee is " << salary << endl;
    }
    Employee()
     {} //Default_constructor
};

/*-------- syntex of defining the drive class ---------------------
class drive class_name : {{visibility_Mode}} parents class
{
    <----------body-------;
}

Note:
1. Default visibility mode is private.
2. public visibility_mode= public members of the base class is also getting pubulic of the drive class.
3. private visibility_mode= public members of the base class is also getting private of the drive class.
4. private visibility_mode= private members of the base class isn't inherited */

//class programmer : Employee   <<-- Employee is in private visibility-mode.(point 3.)

class programmer : public Employee //base class is in public visibility mode
{
public:
    programmer(int Empid) //constructor of the drived class.
    {
        id = Empid; //to make it pass "id" i need to make it public member of the base class as we note in point 4.
    }
    int languagecode = 8;
    // cin>>languagecode;------we can't give input to Drive class.
    //cout<<" He has language code "<<languagecode;  <<------- the value is not pass to output in ------------ drive class.
void getdata()
{
    cout<<id<<endl;
}
};

int main()
{
    int i;
    cin >> i;
    Employee romeo(i);
    programmer stillF(i);
    cout<<stillF.languagecode<<endl;
 stillF.getdata();
    return 0;
}

/*note:
---------1. In c++, constructor and destructor of the class cann't be inherited to drived class, however we creat an objerct
 then constructor of the base class auotomatically.

---------2. Static function is not the part of an object.Hence it cann't be inherited in the drived classes.Notr that all teh class member functions 
 that are the part of an object,Only they can be inherited*/