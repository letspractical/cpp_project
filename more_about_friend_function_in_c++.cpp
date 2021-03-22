#include <iostream>
using namespace std;

class y;
class x
{
    int num1;
    friend void exchange(x &, y &); //we need to give reference instead of variable.

public:
    void pass1(int v)
    {
        num1 = v;
    }
    void print() //we can't directly print line into class, we need a function to make it possible which contain that printable statement
    {
        cout << " the value of num1 is " << num1 << endl;
    }
};

class y
{
    int num2;
    friend void exchange(x &, y &);

public:
    void pass1(int v)
    {
        num2 = v;
    }
    void print() //we can't directly print line into class, we need a function to make it possible which contain that printable statement
    {
        cout << " the value of num2 is " << num2 << endl;
    }
};

void exchange(x &e, y &r)
{
    int temp = e.num1 ;
    e.num1 = r.num2 ;
    r.num2 = temp ;
}

int main()
{
    x wr;
    wr.pass1(56);
    wr.print();

    y er;
    er.pass1(06);
    er.print();
exchange(wr, er);
cout<<"the value after exchange: \n";
    wr.print();er.print();
    return 0;
}//shortcut multi cursor alt+click.