                 //  This program for knowing the significance of virtual keyword,,,,or we can say learning the virtual function of the class.******

#include <iostream>
using namespace std;

class base
{
// vitual function is used to perform the function overloading and the perform the polymorphism
public:
    int var_base = 87 ;
    void display()     /* virtual function.....by adding virtual keyword with the same name function but of differ class we can also perform function 
                                  overloading at pointer in derived class object. */
    {
        cout << " the value of var_base is =" << var_base << endl;
    }
};

class derive : public base
{

public:
    int var_derive= 90;
    virtual void display()
    {
        cout << " the value of var_base is =" << var_base << endl;

        cout << " the value of var_derive is =" << var_derive << endl;
    }
};

int main()
{
        
    derive obj_derive;
    base *setting_a_pointer = &obj_derive; 
    setting_a_pointer -> display();    /*because we have added the virtual keyword with the display functoion of the base class, that's why the pointer of the base class is pointing the 
    function of the derived class which have also the same name as base class function. */
    return 0;
}
                                //successfully executed*******