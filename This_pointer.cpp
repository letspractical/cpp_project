// --------------- In this program we are learning the functioning of "this" keyword --------------------------

#include <iostream>
using namespace std;

class kuchh_bhi
{
    int a;   //data members.

public:
    //kuchh_bhi & setdata(int a)  --------- by using reference variables we can get return value as an object from the function.
    int setdata(int a)
    {
        cin >> a;

        /* "this" is a keyword which is a pointer which point to the object which invoke member functions. It is a local object pointer which
        in every instance function, containing object of caller object, This pointer cannot be modified. It is used to refer as caller in member
        function*/
        this->a = a; //this-> a   *means this is a pointer which is calling an object "int a".
        //return *this;   this statement is returning an object, therefore
        return a;
    }

    void getdata()
    {
        cout << "the value of a = " /*<< *this <<endl;*****invalid*/ << a << endl;
    }
};

int main()
{
    int f;
    kuchh_bhi k1;
    // k1.setdata(f).getdata();     because setdata(f) is returning an object, therefore by using .getdata() we can print our output.
    k1.setdata(f);
    k1.getdata();
    return 0;
}