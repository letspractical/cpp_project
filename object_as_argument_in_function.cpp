#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setdatabysum(complex o1, complex o2)  //objects as an argument declared in function
    {
        a = o1.a + o2.a;  //objects performing operations by access the variables
        b = o1.b + o2.b;
    }

    void print_data()
    {
        cout << "the final complex number is " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex c1;
    c1.setdata(3,4);
    c1.print_data();
    complex c2;
    c2.setdata(4,5);
    c2.print_data();
    complex c3;
    c3.setdatabysum(c1, c2);  //assigning objects in function call by another object
    c3.print_data();

    return 0;
}