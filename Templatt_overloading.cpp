// member function template.........................

#include <iostream>
#include <cstring>
using namespace std;
template <class r>
class naughty
{
public:
    r data;

    naughty(r a)
    {
        data = a;
    }
    void display();
};

template <class r>
void naughty<r> ::display()
{
    cout << " Data is " << data << endl;
}

void func(int b)                                  //function overloading
{
    cout<<" this id func()"<<func()<<endl;
}


template <class g>
void func(g b)                                    //function overloading will come if we set the template of line 25 of same type.
{
    cout<<" this id func()"<<func()<<endl;
}

template <class g>
void fun1c(g b)                                    //function overloading will come if we set the template of line 25 of same type.
{
    cout<<" this id fun1c()"<<endl;
}


int main()
{
    /*naughty<float> no1(4.7);
    no1.display();*/
naughty<float> f1(3.4);
f1.display();
f1.func(4);// exact function will be prioritize.

f1.func(a);
int g;
cin>>g;
f1.fun1c(g);

    return 0;
}