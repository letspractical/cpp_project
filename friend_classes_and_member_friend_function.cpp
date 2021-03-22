//in this program we are making friend class to get access to all members of the class from another function.

#include <iostream>
using namespace std;

class complex; //    <---step3.
               //just declaring a class for compiler to understad that the class is defined further
               /* we are doing this because we are going to make a class which will contain its object and when the compiler read
 their statements then'll show some errors refer to declaration of this class, so that's why we are doing this here.*/

class calculator //    <---step1.
{
public:
    //function declared but it must be public otherwise not accessable,we are just declaring
    /* type of the object in the function of class complex*/
    //we also need to know that we can't make direct objects of existing class into friend class ,it is bacause we haven't declared
    //any object in line 6.
    int sumreal(complex, complex);
    int sumcomp(complex, complex);
};

class complex //    <---step2.
{
    int a, b;

public:
    friend calculator; /* now we can get access to every member of the class claculator by just declare it friend class
                          of the existing class*/
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

int calculator::sumcomp(complex o1, complex o2) //during defining we don't need write friend keyword before calulator class
{
    return (o1.b + o2.b);
}

int calculator ::sumreal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    complex cmp1;
    cmp1.setdata(2, 4);
    cmp1.print_data();
    complex cmp2;
    cmp2.setdata(6, 5);
    cmp2.print_data();
    calculator cmp3; /* because sumreal() is function of the class calculator so need to create an object to 
    get access the function, we know that members have scope just as in the particular class.*/

    int sum = cmp3.sumreal(cmp1, cmp2); // we need to define objects inside the argument field.
    cout << "the sum of real part of complex number is " << sum << endl;
    int sum2 = cmp3.sumcomp(cmp1, cmp2);
    cout << "the sum of complex part of complex number is " << sum2 << endl;
    return 0;
}