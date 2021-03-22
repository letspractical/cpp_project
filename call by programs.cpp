#include <iostream>

using namespace std;

void swap1(int a, int b) //call by value.
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}

void swap_pointer(int *a, int *b) //call by reference using pointer
{
   int temp = *a;
   *a = *b;
   *b = temp;
}

void swap_ref_variable(int &a, int &b) //call by reference by reference variable.
{
   int temp = a;
   a = b;
   b = temp;
}

int &swap_(int &a, int &b) //if the swap is returning any value then we can change it as we like,look at
{                          //where it is called.
   int temp = a;           //this is happen because the address operator we assign before swap_() is actually refering
   a = b;                  //the returning value a
   b = temp;
   return a;
}

int main()
{
   int a, b, c, d, e, f;

   cin >> a;
   cin >> b;
   cout << "the value of a is " << a << " and of b is " << b << endl;
   swap(a, b);
   cout << "the value of a is " << a << " and of b is " << b << endl; //swaping successful

   cin >> c;
   cin >> d;
   cout << "the value of c is " << c << " and of d is " << d << endl;
   swap_pointer(&c, &d);
   cout << "the value of c is " << c << " and of d is " << d << endl; //swaping successful

   cin >> e;
   cin >> f;
   cout << "the value of e is " << e << " and of f is " << f << endl;
   swap_ref_variable(e, f);
   cout << "the value of e is " << e << " and of f is " << f << endl; //swaping successful

   swap_(e, f) = 334;
   cout << "the changed value of e is " << e << " and of f is " << f << endl;
}