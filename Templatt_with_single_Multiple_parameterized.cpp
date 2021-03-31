#include <iostream>
#include<cstring>
using namespace std;
template <class t, class s>    //template containing multiple parameters.
class Myclass
{
public:
    t data1;
    s data2;

    Myclass(int a, string b)   //constructor is containing multiple parameters irrespective of the templates.
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()

{
    int a; string b;
    cout<<" Enter the integer : ";
    cin>>a;
    cout<<" Enter the string  : ";
    cin>>b;
    Myclass<int, string> obj1(a, b);   //template is not endorsing its custom type on constructor's arguments it only do with wheer it is declared in the class
    obj1.display();
    return 0;
}

//successfully executed***********!!!!!
//note: we can't dectare template at main function.