#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    int setdata()
    {
        int real, imaginary;
        cin >> real;
        a = real;
        cin >> imaginary;
        b = imaginary;
        return 0;
    }
    void getdata()
    {
        cout << "The complex number is " << a << " + " << b << " i " << endl;
    }
};

int main()
{

    /*
     complex c1;
     complex *pntr = &c1;
     (*pntr).setdata();
     (*pntr).getdata();
*/

    complex *ptr = new complex;
    ptr->setdata(); //arrow operator , we can use it instead of dot operator also when we are going to dereference the pointer
    (*ptr).getdata();

    return 0;
}