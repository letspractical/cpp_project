//multiple Inheritance program.

/*
         For a protected member:

                            public derivation      |         private derivation        |          protected derivation

    1.  private members      Not Inherited         |         Not Inherited             |           Not Inherited

    2.  protected members     protected            |         private                   |           protected    

    3.  public members        public               |         private                   |           protected       
    
    */

#include <iostream>
using namespace std;

class base1
{
protected:
    int var_1;

public:
    int set_value1();
};

int base1 :: set_value1()
    {
        int a;
        cin >> a;
        var_1 = a;
        return var_1;
    }

class base2
{
protected:
    int var_2;

public:
    int set_value2();
};

int base2 :: set_value2()
    {
        int b;
        cin >> b;
        var_2 = b;
        return var_2;
    }

class drived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of var_1 is " << var_1 << endl;
        cout << "the value of var_2 is " << var_2 << endl;
        cout << "the sum of var_1 and var_2 is " << var_1 + var_2 << endl;
    }
};
int main()
{
    drived ram;
    ram.set_value1();
    ram.set_value2();
    ram.show();
    return 0;
}