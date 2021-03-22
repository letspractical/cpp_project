// this lecture is to understand the constructor in drived class, with its an argument.

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base class constructor called " << data1 << endl;
    }
    void printdata1(void)
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base class constructor called " << data2 << endl;
    }
    void printdata2(void)
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class drive : public Base1, public Base2
{
    int drive1, drive2;
    public:
    drive(int a,int b, int c, int d): Base1(a), Base2(b)     /*in this lines 4 arguments are assigned in drive class constructor in which 2 belongs to each Base classes*/ 
    {
        drive1 = c;
        drive2 = d;
        cout<<"Drived class constructor called "<<endl;
    }
    void printdatadrived(void)
    {
        cout<<"The value of drive1 is " <<drive1 <<endl;
        cout<<"The value of drive2 is " <<drive2 <<endl;
    }
};

/*
   
   class1:
   class B : public A
   {
      order of the execution of the class -> A(base) then B(derive)
   };
   
   
   
   case2:
   class A : public B, public C
   {
       order of the execution of the class -> B(base) then C(base) and A(drive)
    };
       
    
    
    case3:
    class A : public B, Virtual public C
    {
           order of the execution of class -> c(base) then b(base) and A(drive)
    };

*/

int main()
{
drive nanu(1,2,3,4);
nanu. printdata1();
nanu. printdata2();
nanu . printdatadrived();
    return 0;
}

//successful