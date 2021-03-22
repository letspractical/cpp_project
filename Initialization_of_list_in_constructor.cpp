  // This lecture for initialization of the list in the constructor


#include<iostream>
using namespace std;
/*
Syntax for initialisation list in constructor: 

         constructor(argument - list) : Initialization-section
         {
             assignment + other code;
         }

         class Test
         {
             int A, B;
             public:
             Test(int a, int b) : A(a), B(b)
             {
                 constructor - body
             }

         };
*/

class Test
{
    //int B, A; if this , then line 39 also become executable.
    int A, B;
    public:
    Test(int a, int b) : A(a), B(b)   // reference to line 9.

//Test(int a, int b) : A(a), B(a+b)  executable

//Test(int a, int b) : A(a), B(2*b)  executable

//Test(int a, int b) : A(a), B(A+b)  executable

// Test(int a, int b) : B(b), A(a+B)   ----> this will not execute because at declaration the order of A and B ia not similar to Initialization section 
    {
        cout<<"Constructor executed"<<endl;
        cout<<"value of A is "<<A<<endl;
        cout<<"value of B is "<<B<<endl;
    }

};
int main()
{
Test t(4,5);   //argument of the constructor is passed.
return 0;
}