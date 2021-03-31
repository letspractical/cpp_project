

// Abstract class is the class which contain at least a virtual function which will definitely be override in derived
// class.

#include <iostream>
#include <cstring>
using namespace std;

class car //#######**********Abstract class******#####
{
protected:
    string Name;
    string Car_Name;
    string Car_Color;

public:
    virtual void display() = 0; // this is called with no function commonly known with [pure virtual function].

    //void color_display(){} = 0;, **** this is the function which will be override in the derived class*******(must)
};
class Detail : public car
{
    string Company_Name;

public:
    void display()
    {
        cout << " Enter the name of the company ";
        cin >> Company_Name;
        cout << endl;
        cout << " Enter the name of car ";
        cin >> Car_Name;
        cout << endl;
        cout << " The color of the car is ";
        cin >> Car_Color;
        cout << endl;
    }
};

class Price : public car
{
    float price;

public:
    void display()
    {
        cout << " The price of the car is : ";
        cin >> price;
    }
};

int main()
{
    int n;
    cout << endl;
    cout << " Enter the size of the pointer ";
    cin >> n;
    car *c1[n];
    Detail d1;
    c1[0] = &d1;
    Price p1;
    c1[1] = &p1;
    cout << endl;
    c1[0]->display();
    cout << endl;
    c1[1]->display();

    return 0;
}