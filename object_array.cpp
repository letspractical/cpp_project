#include <iostream>
using namespace std;

class employee
{
    int id;/*because by default all class members(variables) are privite in nature therefore*/
    int salary;/*it cant be define directly in class.*/

public:
    void id_no()
    {
        salary=500;   //class member(variables) can only define in class by defining it in any function.
        cout << "enter the employe id "<< endl;
        cin >> id;
    }
};

int main()
{
    int n;  //no. of employees
    cin>>n;
    employee e1[n]; //making an object of the employee class
    for( int i=0;i<n;i++)
    {
        e1[n].id_no();   //calling object array in loop
    }
    
    employee e2;
    employee e3;
    employee e4;

    return 0;
}