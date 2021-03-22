  /*in this program we are just calling function of one class into another class by declaring it friend*/
  //although it is very long method to call any function belong to another class, to overcome it we just
  // make the entire class as friend class of the the existing class.

#include <iostream>
using namespace std;

class complex; //    <---step3.
               //just declaring a class for compiler to understad that the class is defined further
               /* we are doing this because we are going to make a class which will contain its object and when the compiler read
 their statements then'll show some errors refer to declaration of this class, so that's why we are doing this here.*/

class calculator //    <---step1.
{
public:
    int sumreal(complex, complex); //function declared but it must be public otherwise not accessable,we are just declaring
    /* type of the object in the function of class complex*/
    int sumcomp(complex, complex);
};

class complex //    <---step2.
{
    int a, b;

public:
    friend int calculator::sumreal(complex, complex); /*friend keyword is just like a licence for sumreal() to compiler that
                                                   it have access to class.*/
    friend int calculator::sumcomp(complex, complex);
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
} //successful program.