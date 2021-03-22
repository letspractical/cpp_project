// project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{//functioning of continue keyword and break keyword
    for (int s = 2; s <= 10; s++) 
    {

        if (s == 5)
        {
            continue;

        }
        cout << "printing s=" << s << endl;
        if (s == 9)

            break;
    }
    //----------------pointer-------------------
    /* pointer is a data type which store another data type*/

    int a = 34;
    int* b = &a;  //----------<address of>(&)address operator----------
    cout << "the address of 'a'= "<<&a<<endl;
    cout << "the address of 'a'= "<<b<<endl;

    //------------<value of>(*)derefrence operator-----------
    cout << "the value of address of 'a'= " << *b << endl;

    //------------pointer to pointer------------
    int** c = &b;
    cout << "the address of 'b'="<<&b<<endl;
    cout << "the address of 'b'=" << c << endl;
    cout << "the address of 'c'=" << &c << endl;// this is the actuall address of the c.
    cout << "the address of 'c'=" << *c << endl; //with single before pointer to pointer means it is carrying address of itself.
    cout << "the value of 'c'=" << **c << endl;

    return 0;


}