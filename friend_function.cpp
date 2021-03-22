#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex sum(complex o1, complex o2); //friend function is declaration 
    /*friend keyword is just like a licence for sum() to compiler that it have access to class.*/
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print_data()
    {
        cout << "the complex number is " << a << " + " << b << "i" << endl;
    }
};

complex sum(complex o1, complex o2) //friend function defining here, but p.t.r is it is not a member function of class
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b)); // we can call member of the class by just the use of an object_name. line 6
    return o3;
}

int main()
{
    complex a1, a2, a3;
    a1.setdata(2, 3);
    a1.print_data();
    a2.setdata(9, 3);
    a2.print_data();
    a3 = sum(a1, a2);
    a3.print_data();
    ;
    return 0;
}

/*---Properties of friend function---------
1. It hasn't its onw type
2. Not a member of the class.
3. Since it is not the member of the class therefore it isn't called by any object of that class.
4. Can be invoked without the help of an object.
5. Usually contains objects as an arguments.
6. Can be declare in any part of the class (privite or public)
7. We can't call any member of the class with their name but need an object_name '.' member_name to
 call, we can look into the line 26.
 */