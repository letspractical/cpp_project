

//*********************** Rivisiting pointers : new and delete keywords...... *************

#include <iostream>
using namespace std;

int main()
{
    //How to define pointers
    int a = 78;
    //int* p = &a;   we can also make pointer by assigning asterisk to just behind return type.  // -----ampersand --> '&', -------asterisk --> '*'.
    int *p = &a;
    *p = 546;

    //cout<<"the location of "<<a<<" is "<<*p<<endl;  *p assigning at printing line actually containing real value of "a". means *p = 78.

    cout << "the location of " << a << " is " << p << " and *p " << *p << " is " << endl;

    //****************** new Keyword/Operator *******************
    //int *p = new float(5.6);                                                  showing ERROR********

    int *o = new int(56);               // return type of the both side varaibles must be
    cout << "the value of the new variable is " << *p << endl;
    cout << "the location of the new variable is " << p << endl;

    int *arr = new int[5];
    arr[0] = 76;
   //********************** delete Keyword/Operator******************

    //arr+1=56;            by this it show an Error.
    *(arr + 1) = 56;       //this is also a way to assign a value in an array location.
    *(arr + 2) = 67;
    arr[3] = 87;
    arr[4] = 78;

    //delete arr;    //deleting the dynamatically allocated memory to variables.
    delete[] arr;    //also for deleting the dynamically memory allocation.
    cout << "the value of the new variable is " << arr[0] << endl;
    cout << "the value of the new variable is " << arr[1] << endl;
    cout << "the value of the new variable is " << arr[2] << endl;
    cout << "the value of the new variable is " << arr[3] << endl;
    cout << "the value of the new variable is " << arr[4] << endl;
    return 0;
}