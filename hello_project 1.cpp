// helloproject1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip> //this header file is used to manipulate the output

/*header files are the files that contain so many types of functions, classes,etc
these function are of two types:
1, system header files(come with compiler)
2, user defined header files(written by the programmer)
*/
#include "these.h"; /*user defined file that is save at same directory, basically this a demo file that i make for now. when i remove that file from the drirectory 
                   this program will show error regarding unvalid header file*/
using namespace std;
int y = 50; //this is the global variable, this must be define before the main function.
      /*global variables are the variable which can be call from any where in the program offcorse it the caller must be define after the defining of the global variable */

int main()

{
    int y = 5; /*this is the local variable because it is defined in the main function, and the variables which is defined or devclared inside any function is
               called local variables, and when we call the same variable inside the function, which is globally as well as locally defined or declared then 
               the call will be goes to local one.
               */
    cout << "Hello World! the value of y="<<y<<endl;
    
    cout << " the global variable value of y is=" << ::y << endl; //but we can also call global variable from inside the function by using scope resolution operator(::).
    
    int &r = y;   //&r is called the reference variable of y(local variable)
    cout << "the vaue of r=" << r << endl;

    int ri = ::y;  // we can also call global variable y by using scope resolution operator.
    cout << "the value of r is=" << ri << endl;

    const double f = 6.89;   //this cont keyword is basically for make "f" constant so that in future the new value willn't change the value of 'f'.
    cout<<  "the value of f="<<f<<endl;

    // --------------manipulator-----------

    int a = 7, b = 67, c = 899, d;

    d = a + b + c;

    cout << d<<endl;

    cout << " the value of 'a' without setw() is" <<  a << endl;
    cout << " the value of 'b' without setw() is" <<  b << endl;
    cout << " the value of 'c' without setw() is" <<  c << endl;

    cout << "who outputs are seen after setw()\n";
    cout << " the value of 'a' setw() is" << setw(2)<< a << endl;
    cout << " the value of 'b' setw() is" << setw(2)<< b << endl;
    cout << " the value of 'c' setw() is" << setw(2)<< c << endl;


    //-------------operator precedence----------- and associativity---------
    int e = 6;
    float i = 9.8;
    int t = 78;
    double u = 6.07;
    float z= i/t+u*69;    //this expression is basically solve by the compiler and it is defining how is the parcing happen but as a develepor we must know this
                  
                          /* the operator precedence is basically a technique by which we can solve the arithmatic expressions in c++, to understand the direction of 
                  solving the expression we can take the help of 'n.cppreference.com' website--------*/
    cout << "the value of z=" << z << endl;

    cout << "this expression is solved in order from left to right as (((i/t)+u)*69)\n";

}

