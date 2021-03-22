//  This program for knowing the significance of run time polymorphism******

#include <iostream>
using namespace std;

class base
{

public:
    int var_base;
    void display()
    {
        cout << " the value of var_base is =" << var_base << endl;
    }
};

class derive : public base
{

public:
    int var_derive;
    void display()
    {
        cout << " the value of var_base is =" << var_base << endl;

        cout << " the value of var_derive is =" << var_derive << endl;
    }
};

int main()
{
    //base *setting_a_pointer = new derive;      //we can assign an object of the derive class to the *pointer of the base class, but (line -->35, 36)
    derive obj_derive;
    base *setting_a_pointer = &obj_derive; //we can assign an object of the derive class to the *pointer of the base class.
    base go;
    int i, j;
    cout << " Enter some value of the i " << endl;
    cin >> i;
    setting_a_pointer->var_base = i; //we can't make access to the drive class members from the base class pointer, whether pointer is assign with the object of the base class.
                                     // so, the accessing of the data member by the pointer also from base class because pointer is from the base class therefore accessiblity also takes place at base class only by the pointer.
    setting_a_pointer->display();    //we can't make access to the drive class members from the base class pointer, whether pointer is assign with the object of the base class.
                                     // so, the accessing of the member by the pointer also from base class because pointer is from the base class therefore accessiblity also takes place at base class only by the pointer.
    go.var_base = i;
    go.display();
    // This concept is called late_binding.
    derive *derived_pointer = &obj_derive;
    cout << " Enter some value of the j " << endl;
    cin >> j;
    derived_pointer->var_base = 90;
    derived_pointer->var_derive = j;

    derived_pointer->display();
    return 0;
}

//successfully executed*******